#include "Boxy.h"

Boxy::Boxy(Vec2& in_position)
	:
	position(in_position)
{
}

void Boxy::Draw(Graphics& gfx) const
{
	gfx.DrawRectDim(int (position.x), int(position.y), int(dimension), int(dimension), color);
}

bool Boxy::TestCollision(const Dude& dude)
{
	const float dudeRight = dude.GetPosition().x + dude.GetWidth();
	const float dudeBottom = dude.GetPosition().y + dude.GetHeight();
	const float boxyRight = position.x + dimension;
	const float boxyBottom = position.y + dimension;

	return
		dudeRight >= position.x &&
		dude.GetPosition().x <= boxyRight &&
		dudeBottom >= position.y &&
		dude.GetPosition().y <= boxyBottom;
}

bool Boxy::IsEaten() const
{
	return isEaten;
}

void Boxy::Respawn(const Vec2& in_position)
{
	position = in_position;
}

void Boxy::UpdateColor()
{
	if (colorIncreasing) {
		if (color.GetR() >= 253) {
			colorIncreasing = false;
		}
		else {
			color = Color(color.GetR() + 2, color.GetG() + 4, color.GetB() + 4);
		}
	}
	else {
		if (color.GetR() <= 127) {
			colorIncreasing = true;
		}
		else {
			color = Color(color.GetR() - 2, color.GetG() - 4, color.GetB() - 4);
		}
	}
}

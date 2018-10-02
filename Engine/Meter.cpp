#include "Meter.h"

Meter::Meter(int in_x, int in_y)
{
	x = in_x;
	y = in_y;
}

void Meter::IncreaseLevel()
{
	++level;
}

int Meter::GetLevel() const
{
	return level;
}

void Meter::Draw(Graphics & gfx) const
{
	gfx.DrawRectDim(x, y, level * scale, girth, color);
}

void Meter::ClampToScreen()
{
	int right = x + level * scale;

	if (right >= Graphics::ScreenWidth - scale) {
		level = 1;
	}
}

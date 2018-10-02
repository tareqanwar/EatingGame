#pragma once
#include "Graphics.h"
#include "Dude.h"
#include "Vec2.h"

class Boxy
{
public:
	Boxy(Vec2& position);
	void Draw(Graphics& gfx) const;
	bool TestCollision(const Dude& dude);
	bool IsEaten() const;
	void Respawn(const Vec2& position);
	void UpdateColor();
private:
	Vec2 position;
	Color color = {127,0,0};
	bool colorIncreasing = true;
	static constexpr float dimension = 20;
	bool isEaten = false;
};
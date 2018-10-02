#pragma once
#include "Graphics.h"
#include "Dude.h"
#include "Vec2.h"

class Poo
{
public:
	void Init(const Vec2& position, const Vec2& velocity);
	void Update();
	bool TestCollision(const Dude& dude) const;
	void Draw(Graphics& gfx) const;
private:
	Vec2 position;
	Vec2 velocity;
	static constexpr int width = 24;
	static constexpr int height = 24;
	bool initialized = false;
};

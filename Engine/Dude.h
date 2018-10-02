#pragma once
#include "Graphics.h"
#include "Keyboard.h"
#include "Mouse.h"
#include "Vec2.h"

class Dude
{
public:
	Dude(Vec2& position);
	void ClampToScreen();
	void Draw(Graphics& gfx) const;
	void HandleMovement(const Keyboard& kbd);
	void HandleMovement(const Mouse& mouse);
	Vec2 GetPosition() const;
	float GetWidth() const;
	float GetHeight() const;
private:
	Vec2 position;
	static constexpr float speed = 3.0f;
	static constexpr float width = 20.0f;
	static constexpr float height = 20.0f;
};

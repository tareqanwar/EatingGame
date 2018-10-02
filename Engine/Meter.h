#pragma once
#include "Graphics.h"

class Meter
{
public:
	Meter(int x, int y);
	void IncreaseLevel();
	int GetLevel() const;
	void Draw(Graphics& gfx) const;
	void ClampToScreen();
private:
	static constexpr Color color = Colors::Yellow;
	static constexpr int girth = 12;
	int scale = 4;
	int x;
	int y;
	int level = 0;
};

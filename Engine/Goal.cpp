#include "Goal.h"
#include<random>
#include"Graphics.h"
#include"Dude.h"

bool Goal::Get_isGoalReached() const
{
	return isGoalReached;
}

Goal::Goal(Graphics& gfx):rng(rd())
{
	CreateGoal(gfx);
}

void Goal::DrawGoal(Graphics& gfx)
{
	r = rng() % 255;
	g = rng() % 255;
	b = rng() % 255;
	for (int i = x; i < x + width; i++)
		for (int j = y; j < y + height; j++)
			gfx.PutPixel(i, j, r, g, b);
}

void Goal::CheckCollision(const Dude & dude)
{
	const int right0 = dude.get_x() + Dude::dudeWidth;
	const int right1 = x + width;
	const int bottom0 = dude.get_y() + Dude::dudeHeight;
	const int bottom1 = y + height;

	if (
		right0 >= x &&
		dude.get_x() <= right1 &&
		dude.get_y() <= bottom1 &&
		bottom0 >= y
		)
	isGoalReached = true;
}

void Goal::CreateGoal(Graphics & gfx)
{
	x = rng() % (Graphics::ScreenWidth - width);
	y = rng() % (Graphics::ScreenHeight - height);
	isGoalReached = false;
	DrawGoal(gfx);
}

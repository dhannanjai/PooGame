#pragma once
#include<random>
#include"Graphics.h"
#include"Dude.h"
#include"Colors.h"

class Goal
{
	int x;
	int y;
	bool isGoalReached = false;
	static constexpr int width = 20;
	static constexpr int height = 20;
	int r, g, b;
public:
	bool Get_isGoalReached()const;
	std::random_device rd;
	std::mt19937 rng;
	Goal(Graphics& gfx);
	void DrawGoal(Graphics& gfx);
	void CheckCollision(const Dude& dude);
	void CreateGoal(Graphics& gfx);
};
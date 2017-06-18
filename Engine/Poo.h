#pragma once
#include"Graphics.h"
#include"Dude.h"

class Poo
{
private:
	int x;
	int y;
	int vx;
	int vy;
	bool isPooEaten = false;

public:
	Poo();
	Poo(int x, int y, int vx, int vy);
	bool IsPooEaten()const;
	void UpdateX();
	void UpdateY();
	void ChangePosition();
	void ProcessConsumption(const Dude& dude);
	void Draw(Graphics& gfx)const;

	static constexpr int pooWidth = 24;
	static constexpr int pooHeight = 24;
};
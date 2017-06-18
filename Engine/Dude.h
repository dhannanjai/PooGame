#pragma once
#include"Graphics.h"
#include"MainWindow.h"

class Dude
{
	int x = 400;
	int y = 300;

public:
	static constexpr int dudeHeight = 20;
	static constexpr int dudeWidth = 20;
	int get_x()const;
	int get_y()const;
	void GetInput(const MainWindow& wnd );
	void UpdateX();
	void UpdateY();
	void Draw(Graphics& gfx)const;
};
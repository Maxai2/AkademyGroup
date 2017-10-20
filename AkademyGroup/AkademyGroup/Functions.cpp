#include "Functions.h"
//---------------------------------------------------------------------------------------------------
Functions::Functions(){}
//---------------------------------------------------------------------------------------------------
Functions::~Functions(){}
//---------------------------------------------------------------------------------------------------
void Functions::frame(short x, short y, int height, int width)
{
	SetColor(Color::CYAN, Color::BLACK);
	SetCoord(x, y);

	cout << char(201);
	for (int i = 0; i < width - 2; i++) cout << char(205);
	cout << char(187);

	for (int j = x + 1; j < height; j++)
	{
		for (int i = 0; i < width; i++)
		{
			SetCoord(i, j);
			if (i == 0 || i == width - 1)
				cout << char(186);
		}
	}

	SetCoord(x, y + short(height) - 1);
	cout << char(200);
	for (int i = 0; i < width - 2; i++) cout << char(205);
	cout << char(188);
	SetColor(Color::LIGHTGREY, Color::BLACK);
}
//---------------------------------------------------------------------------------------------------
void Functions::noCursor(bool visible)
{
	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
	cursorInfo.bVisible = visible; // set the cursor visibility
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}
//---------------------------------------------------------------------------------------------------
void Functions::logo(int color)
{
	SetCoord(Logo::LogoX, Logo::LogoY);
	for (int i = 11; i < 15; i++)
	{
		SetColor(i, Color::BLACK);
		cout << "*-*";
	}
	SetColor(color, Color::BLACK);
	cout << "STEP IT";
	for (int i = 14; i > 10; i--)
	{
		SetColor(i, Color::BLACK);
		cout << "*-*";
	}
	SetColor(Color::LIGHTGREY, Color::BLACK);
}
//---------------------------------------------------------------------------------------------------
void Functions::clearFrame()
{
	SetColor(Color::LIGHTGREY, Color::BLACK);

	for (int i = 3; i < Frame::Height - 4; i++)
	{
		for (int j = 1; j < Frame::Width - 2; j++)
		{
			SetCoord(short(Frame::FrameX + j), short(Frame::FrameY + i));
			cout << " ";
		}
	}
}
//---------------------------------------------------------------------------------------------------
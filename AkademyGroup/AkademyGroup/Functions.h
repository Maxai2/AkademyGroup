#pragma once
#include <windows.h>
#include <iostream>
//---------------------------------------------------------------------------------------------------
enum Color
{
	BLACK,
	DARKBLUE,
	DARKGREEN,
	DARKCYAN,
	DARKRED,
	DARKMAGENTA,
	BROWN,
	LIGHTGREY,
	GREY,
	BLUE,
	GREEN,
	CYAN,
	RED,
	MAGENTA,
	YELLOW,
	WHITE
};

enum KeyCode
{
	UP = 72,
	RIGHT = 77,
	DOWN = 80,
	LEFT = 75,
	ENTER = 13,
	ESC = 27
};

enum Frame
{
	FrameX = 0,
	FrameY = 0,
	Height = 20,
	Width = 65
};

enum Logo
{
	LogoX = 15,
	LogoY = 1
};

enum MenuCoord
{
	IMX = 25,
	EX = 27,
	IMEY = 7
};

//HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

#define SetCoord(x, y) SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {(short)x, (short)y})
#define SetColor(foreGround, backGround) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backGround * 16 + foreGround)

using namespace std;
//---------------------------------------------------------------------------------------------------
class Functions
{
public:
	Functions();
	~Functions();

	static void frame(short x, short y, int height, int width);
	static void noCursor(bool visible);
	static void logo(int color);
};
//---------------------------------------------------------------------------------------------------


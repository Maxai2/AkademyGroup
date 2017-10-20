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
	BACKSPACE = 8,
	ESC = 27,
	SPACE = 32
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
	IMX = (short)25,
	EX = (short)27,
	IMEY = (short)7
};

enum InfoCoord
{
	InfoHeadX = (short)24,
	InfA = (short)17,
	InfG = (short)20,
	InfS = (short)13,
	LG = (short)25,
	LE = (short)24,
	RS = (short)23,
	RE = (short)23,
	InfoCoordY = (short)7
};

enum EditCoord
{
	EditHeadX = short(25),
	ES = short(26),
	EE = short(25),
	EG = short(27),
	EY = short(7)
};

enum MenegCoord
{
	MenegCoordHeadX = short(26),
	MShow = short(20),
	MChange = short(18),
	MRL = short(22),
	MD = short(24),
	MY = short(7)
};

enum EditStudCoord
{
	EditStudheadX = short(20),
	EditStudA = short(26),
	EditStudE = short(24),
	EditStudR = short(23),
	EditY = short(7)
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
	static void clearFrame();
};
//---------------------------------------------------------------------------------------------------


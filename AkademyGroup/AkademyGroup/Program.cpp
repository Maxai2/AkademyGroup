#include "Program.h"
//---------------------------------------------------------------------------------------------------
Program::Program(){}
//---------------------------------------------------------------------------------------------------
Program::~Program(){}
//---------------------------------------------------------------------------------------------------
void Program::load()
{
	Functions::noCursor(true);
	Functions::frame(Frame::FrameX, Frame::FrameY, Frame::Height, Frame::Width);
	Functions::logo(Color::GREEN);
}
//---------------------------------------------------------------------------------------------------
void Program::menu(int sel)
{
	
}
//---------------------------------------------------------------------------------------------------
void Program::welcomMenu(int sel)
{
	char str[][13] = { "Information", "Editing", "Management" };

	for (int i = 0; i < 3; i++)
	{
		if (i == 0)	SetCoord((short)MenuCoord::IMX, short(MenuCoord::IMEY + i));
   else if (i == 1) SetCoord((short)MenuCoord::EX, short(MenuCoord::IMEY + i));
   else if (i == 2) SetCoord((short)MenuCoord::IMX, short(MenuCoord::IMEY + i));

		sel == i ? SetColor(Color::LIGHTGREY, Color::DARKGREEN) : SetColor(Color::LIGHTGREY, Color::BLACK);
		cout << str[i];

		menuName[i] = str[i];

	}
	
	this->count = 3;
}
//---------------------------------------------------------------------------------------------------
int Program::getCount() { return this->count; }
//---------------------------------------------------------------------------------------------------
string Program::getName(int sel) { return this->menuName[sel]; }
//---------------------------------------------------------------------------------------------------

#include "Program.h"
//---------------------------------------------------------------------------------------------------
Program::Program(){}
//---------------------------------------------------------------------------------------------------
Program::~Program(){}
//---------------------------------------------------------------------------------------------------
void Program::load()
{
	Functions::noCursor(false);
	Functions::frame(Frame::FrameX, Frame::FrameY, Frame::Height, Frame::Width);
	Functions::logo(Color::GREEN);
}
//---------------------------------------------------------------------------------------------------
void Program::menu(int sel)
{
	if (this->menuName[sel] == "Information") { this->info = true; }
	if (this->menuName[sel] == "Editing") { this->edit = true; }
	if (this->menuName[sel] == "Management") { this->maneg = true; }
}
//---------------------------------------------------------------------------------------------------
void Program::clearVector()
{
	int index = 0;
	while (menuName.size() != 0)
	{
		menuName.pop_back();
		index++;
	}
}
//---------------------------------------------------------------------------------------------------
void Program::welcomeMenu(int sel)
{
	clearVector();
	char str[][13] = { "Information", "Editing", "Management" };

	for (int i = 0; i < 3; i++)
	{
		if (i == 0)	SetCoord(MenuCoord::IMX, short(MenuCoord::IMEY + i));
   else if (i == 1) SetCoord(MenuCoord::EX, short(MenuCoord::IMEY + i));
   else if (i == 2) SetCoord(MenuCoord::IMX, short(MenuCoord::IMEY + i));

		sel == i ? SetColor(Color::LIGHTGREY, Color::DARKGREEN) : SetColor(Color::LIGHTGREY, Color::BLACK);
		cout << str[i];

		menuName.push_back(str[i]);
	}
	this->count = 3;
}
//---------------------------------------------------------------------------------------------------
void Program::infoMenu(int sel)
{
	clearVector();
	char str[][40] = { "Information about the academy", "Information about group", 
					   "Information about a student in a group", "Group list", 
					   "Employee list", "Student rating", "Employee rating"};

	for (int i = 0; i < 7; i++)
	{
		if (i == 0)	SetCoord(InfoCoord::InfA, short(InfoCoord::InfoCoordY + i));
		else if (i == 1) SetCoord(InfoCoord::InfG, short(InfoCoord::InfoCoordY + i));
		else if (i == 2) SetCoord(InfoCoord::InfS, short(InfoCoord::InfoCoordY + i));
		else if (i == 3) SetCoord(InfoCoord::LG, short(InfoCoord::InfoCoordY + i));
		else if (i == 4) SetCoord(InfoCoord::LE, short(InfoCoord::InfoCoordY + i));
		else if (i == 5) SetCoord(InfoCoord::RS, short(InfoCoord::InfoCoordY + i));
		else if (i == 6) SetCoord(InfoCoord::RE, short(InfoCoord::InfoCoordY + i));

		sel == i ? SetColor(Color::LIGHTGREY, Color::DARKGREEN) : SetColor(Color::LIGHTGREY, Color::BLACK);
		cout << str[i];

		menuName.push_back(str[i]);
	}
	this->count = 7;
}
//---------------------------------------------------------------------------------------------------
void Program::editMenu(int sel)
{
	clearVector();
	char str[][10] = { "Student", "Employee", "Group" };

	for (int i = 0; i < 3; i++)
	{
		if (i == 0)	SetCoord(EditCoord::ESG, short(EditCoord::EY + i));
		else if (i == 1) SetCoord(EditCoord::EE, short(EditCoord::EY + i));
		else if (i == 2) SetCoord(EditCoord::EG, short(EditCoord::EY + i));

		sel == i ? SetColor(Color::LIGHTGREY, Color::DARKGREEN) : SetColor(Color::LIGHTGREY, Color::BLACK);
		cout << str[i];

		menuName.push_back(str[i]);
	}
	this->count = 3;
}
//---------------------------------------------------------------------------------------------------
void Program::manegMenu(int sel)
{
	clearVector();
	char str[][50] = { "Show incomes and expenses", "Change the cost of training",
					   "Raise / lower salary", "Change director" };

	for (int i = 0; i < 4; i++)
	{
		if (i == 0)	SetCoord(MenegCoord::MShow, short(MenegCoord::MY + i));
		else if (i == 1) SetCoord(MenegCoord::MChange, short(MenegCoord::MY + i));
		else if (i == 2) SetCoord(MenegCoord::MRL, short(MenegCoord::MY + i));
		else if (i == 3) SetCoord(MenegCoord::MD, short(MenegCoord::MY + i));

		sel == i ? SetColor(Color::LIGHTGREY, Color::DARKGREEN) : SetColor(Color::LIGHTGREY, Color::BLACK);
		cout << str[i];

		menuName.push_back(str[i]);
	}
	this->count = 4;
}
//---------------------------------------------------------------------------------------------------
int Program::getCount() { return this->count; }
//---------------------------------------------------------------------------------------------------
string Program::getName(int sel) { return this->menuName[sel]; }
//---------------------------------------------------------------------------------------------------

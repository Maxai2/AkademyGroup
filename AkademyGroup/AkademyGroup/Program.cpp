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

	aca.setCity("Baku"); 
	aca.setAddress("Baku, Koroglu Rahimov, 70");
}
//---------------------------------------------------------------------------------------------------
void Program::menu(int sel)
{
	if (this->menuName[sel] == "Information") { this->info = true; }
	if (this->menuName[sel] == "Editing") { this->edit = true; }
	if (this->menuName[sel] == "Management") { this->manag = true; }
	if (this->menuName[sel] == "Information about the academy") { this->InfAboutTheAcademy = true; }
	if (this->menuName[sel] == "Student") { this->EditStud = true; }
}
//---------------------------------------------------------------------------------------------------
bool Program::backMenu()
{
	int all = 0;
	if (this->info) { this->info = false; all++; }
	if (this->edit) { this->edit = false; all++; }
	if (this->manag) { this->manag = false; all++; }
	if (this->InfAboutTheAcademy) { this->InfAboutTheAcademy = false; all++; }

	if (all == 0) return false;
	else return true;
}
//---------------------------------------------------------------------------------------------------
void Program::clearVector()
{
	while (menuName.size() != 0) menuName.pop_back();
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

	SetCoord(InfoCoord::InfoHeadX, short(InfoCoord::InfoCoordY - 1));
	cout << "*INFORMATION*";
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

	SetCoord(EditCoord::EditHeadX, short(EditCoord::EY - 1));
	cout << "*EDITING*";
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

	SetCoord(MenegCoord::MenegCoordX, short(MenegCoord::MY - 1));
	cout << "*MANAGEMENT*";
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
void Program::InfAboutTheAcademyMenu()
{
	short x = 1, y = 5, space = 20, counter = 0;
	
	SetCoord(x, y);	cout << "City:";
	SetCoord(x + space, y); cout << aca.getCity();
	counter++;

	SetCoord(x, y + counter);	cout << "Address:";
	SetCoord(x + space, y + counter); cout << aca.getAddress();
	counter++;

	SetCoord(x, y + counter); cout << "Groups count:";
	SetCoord(x + space, y + counter); //cout << 
}
//---------------------------------------------------------------------------------------------------
void Program::EditStudMenu(int sel)
{
	clearVector();
	char str[][50] = { "Add",  };

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
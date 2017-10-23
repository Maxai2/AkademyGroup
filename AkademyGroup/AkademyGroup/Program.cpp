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
void Program::backMenu()
{
	this->info = false;
	this->edit = false;
	this->manag = false;
	this->EditStudGroupEmployee = false;
}
//---------------------------------------------------------------------------------------------------
void Program::menu(int sel)
{
	if (this->menuName[sel] == "Information") { this->info = true; }
	else
	if (this->menuName[sel] == "Editing") { this->edit = true; }
	else
	if (this->menuName[sel] == "Management") { this->manag = true; }
	else
	if (this->menuName[sel] == "Information about the academy") { this->InfAboutTheAcademy = true; }
	else
	if (this->menuName[sel] == "Student" || this->menuName[sel] == "Group" || this->menuName[sel] == "Employee") 
		{ this->EditStudGroupEmployee = true; }
	if (this->menuName[sel] == "Add Student")
	{
		
	}
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
	SetColor(Color::YELLOW, Color::RED);
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
	SetColor(Color::YELLOW, Color::RED);
	cout << "*EDITING*";
	for (int i = 0; i < 3; i++)
	{
		if (i == 0)	SetCoord(EditCoord::ES, short(EditCoord::EY + i));
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

	SetCoord(MenegCoord::MenegCoordHeadX, short(MenegCoord::MY - 1));
	SetColor(Color::YELLOW, Color::RED);
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
void Program::EditStudGroupEmployeeMenu(int sel, string who)
{
	clearVector();

	char buffer[3][16];

	SetCoord(EditStudCoord::EditStudheadX, short(EditStudCoord::EditY - 1));
	SetColor(Color::YELLOW, Color::RED);
	if (who == "stud") 
	{
		char str[][16] = { "Add Student", "Edit Student", "Remove Student" };
		cout << "*STUDENT EDITING*";
		
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 16; j++)
				buffer[i][j] = str[i][j];
	}
	else
	if (who == "group")
	{
		char str[][16] = { "Add Group", "Edit Group", "Remove Group" };
		cout << "*GROUP EDITING*";

		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 16; j++)
				buffer[i][j] = str[i][j];
	}
	else
	{
		char str[][16] = { "Add Employee", "Edit Employee", "Remove Employee" };
		cout << "*EMPLOYEE EDITING*";

		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 16; j++)
				buffer[i][j] = str[i][j];
	}

	for (int i = 0; i < 3; i++)
	{
		if (i == 0)	SetCoord(EditStudCoord::EditStudA, short(EditStudCoord::EditY + i));
		else if (i == 1) SetCoord(EditStudCoord::EditStudE, short(EditStudCoord::EditY + i));
		else if (i == 2) SetCoord(EditStudCoord::EditStudR, short(EditStudCoord::EditY+ i));

		sel == i ? SetColor(Color::LIGHTGREY, Color::DARKGREEN) : SetColor(Color::LIGHTGREY, Color::BLACK);
		cout << buffer[i];

		menuName.push_back(buffer[i]);
	}
	this->count = 3;
}
//---------------------------------------------------------------------------------------------------
int Program::getCount() { return this->count; }
//---------------------------------------------------------------------------------------------------
string Program::getName(int sel) { return this->menuName[sel]; }
//---------------------------------------------------------------------------------------------------
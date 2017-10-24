#include "Group.h"
//---------------------------------------------------------------------------------------------------
Group::Group(){}
//---------------------------------------------------------------------------------------------------
Group::~Group(){}
//---------------------------------------------------------------------------------------------------
void Group::setName(string name) { this->name = name; }
//---------------------------------------------------------------------------------------------------
string Group::getName() { return this->name; }
//---------------------------------------------------------------------------------------------------
void Group::setSubject(string name) { this->subject = name; }
//---------------------------------------------------------------------------------------------------
string Group::getSubject() { return this->subject; }
//---------------------------------------------------------------------------------------------------
void Group::AddStud()
{
	string name, surname, phone, email;
	int age;

ESC:
	SetCoord(24, 3);
	SetColor(Color::YELLOW, Color::RED);
	cout << "*ADD STUDENT*";

	Functions::noCursor(true);
	short x = 1, y = 5, space = 20, counter = 0;

	SetColor(Color::YELLOW, Color::BLACK);
	SetCoord(x, y);	cout << "Name:";
	SetColor(Color::LIGHTGREY, Color::BLACK);
	SetCoord(x + space, y); getline(cin, name);
	counter++;

	SetColor(Color::YELLOW, Color::BLACK);
	SetCoord(x, y + counter);	cout << "Surname:";
	SetColor(Color::LIGHTGREY, Color::BLACK);
	SetCoord(x + space, y + counter); getline(cin, surname);
	counter++;

	SetColor(Color::YELLOW, Color::BLACK);
	SetCoord(x, y + counter);	cout << "Age:";
	SetColor(Color::LIGHTGREY, Color::BLACK);
	SetCoord(x + space, y + counter); cin >> age; cin.ignore();
	counter++;

	SetColor(Color::YELLOW, Color::BLACK);
	SetCoord(x, y + counter);	cout << "Phone:";
	SetColor(Color::LIGHTGREY, Color::BLACK);
	SetCoord(x + space, y + counter); getline(cin, phone);
	counter++;

	SetColor(Color::YELLOW, Color::BLACK);
	SetCoord(x, y + counter);	cout << "Email:";
	SetColor(Color::LIGHTGREY, Color::BLACK);
	SetCoord(x + space, y + counter); getline(cin, email);
	counter++;

	Student tempStud(name, surname, age, phone, email, 0.0, 0.0);

	Functions::noCursor(false);

	SetCoord(x, y + counter + 2);
	cout << "Ok or repeat?(Space/Esc)";

	int key = 0, Mesc = KeyCode::ESC, Mspace = KeyCode::SPACE;

	while (true)
	{
		if ((key == KeyCode::ESC) || (key == KeyCode::SPACE))
			break;
		else
		{
			key = _getch();
			if (key == 0 || key == 224)
				key = _getch();
		}
	}

	if (key == KeyCode::ESC)
	{
		Functions::clearFrame();
		goto ESC;
	}

	tempStud.count++;
}
//---------------------------------------------------------------------------------------------------
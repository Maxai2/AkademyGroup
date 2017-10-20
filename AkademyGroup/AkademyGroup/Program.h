#pragma once

#include <vector>

#include "Functions.h"
#include "Academy.h"
//---------------------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------------------------
class Program
{
	Academy aca;
	int count;
	vector<string> menuName;
public:
	Program();
	~Program();

	bool info = false;
	bool edit = false;
	bool manag = false;
	bool InfAboutTheAcademy = false;
	bool EditStud = false;

	void load();
	void menu(int sel);
	bool backMenu();

	void welcomeMenu(int sel);
	void infoMenu(int sel);
	void editMenu(int sel);
	void manegMenu(int sel);
	void InfAboutTheAcademyMenu();
	void EditStudMenu(int sel);

	void clearVector();
	int getCount();
	string getName(int sel);
//	static void save();
};
//---------------------------------------------------------------------------------------------------
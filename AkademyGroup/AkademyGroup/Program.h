#pragma once

#include <vector>

#include "Functions.h"
#include "Academy.h"
#include "Student.h"
//---------------------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------------------------
class Program
{
	Academy aca;
	int count;
	vector<string> menuName;
public:
	vector<string> path;
	Program();
	~Program();

	bool info = false;
	bool edit = false;
	bool manag = false;
	bool InfAboutTheAcademy = false;
	bool EditStudGroupEmployee = false;

	void load();
	void menu(int sel);
	void backMenu();

	void welcomeMenu(int sel);
	void infoMenu(int sel);
	void editMenu(int sel);
	void manegMenu(int sel);
	void InfAboutTheAcademyMenu();
	void EditStudGroupEmployeeMenu(int sel, string who);


	void clearVector();
	int getCount();
	string getName(int sel);
//	static void save();
};
//---------------------------------------------------------------------------------------------------
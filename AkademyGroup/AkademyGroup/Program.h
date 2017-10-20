#pragma once

#include <vector>

#include "Functions.h"
//---------------------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------------------------
class Program
{
	int count;
	vector<string> menuName;
public:
	Program();
	~Program();

	bool info = false;
	bool edit = false;
	bool maneg = false;

	void load();
	void menu(int sel);

	void welcomeMenu(int sel);
	void infoMenu(int sel);
	void editMenu(int sel);
	void manegMenu(int sel);

	void clearVector();
	int getCount();
	string getName(int sel);
//	static void save();
};
//---------------------------------------------------------------------------------------------------
//class Program {
//public:
//};
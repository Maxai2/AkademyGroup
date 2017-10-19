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

	void load();
	void menu(int sel);

	void welcomMenu(int sel);
	int getCount();
	string getName(int sel);
//	static void save();
};
//---------------------------------------------------------------------------------------------------
//class Program {
//public:
//};
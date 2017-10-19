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
	void menu();

	void welcomMenu(int sel);
	int getCount();
//	static void save();
};
//---------------------------------------------------------------------------------------------------
//class Program {
//public:
//};
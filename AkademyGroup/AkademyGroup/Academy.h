#pragma once
#include <string>

#include "Director.h"
#include "Group.h"
#include "Student.h"
#include "Employee.h"

using namespace std;
//---------------------------------------------------------------------------------------------------
class Academy
{
	string city;
	string address;
	int monthlyFee;
	int money;
	Director *director;
	Group designers[10];
	Group programmers[10];
	Group admins[10];
	Student students[100];
	Employee employees[100];
public:
	Academy();
	~Academy();

	void setCity(string str);
	string getCity();
	void setAddress(string str);
	string getAddress();
};
//---------------------------------------------------------------------------------------------------
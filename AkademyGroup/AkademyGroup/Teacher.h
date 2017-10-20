#pragma once
#include <string>

#include "Employee.h"

using namespace std;
//---------------------------------------------------------------------------------------------------
class Teacher : public Employee
{
protected:
	string skills[];
public:
	Teacher();
	~Teacher();

	string* getSkill();
	void setSkill(string arr[]);
};
//---------------------------------------------------------------------------------------------------
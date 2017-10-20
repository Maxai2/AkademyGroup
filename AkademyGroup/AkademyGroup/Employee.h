#pragma once

#include "Person.h"
//---------------------------------------------------------------------------------------------------
class Employee : public Person
{
protected:
	int salary;
	int experience;
public:
	Employee();
	~Employee();

	void setSalary(int num);
	int getSalary();
	void setExperience(int num);
	int getExperience();
};
//---------------------------------------------------------------------------------------------------
#pragma once

#include "Person.h"
//---------------------------------------------------------------------------------------------------
class Student : public Person
{
protected:
	double average;
	double presence;
public:
	Student();
	~Student();

	void setAvarage(double num);
	double getAvarage();
	void setPresence(double num);
	double getPresence();
};
//---------------------------------------------------------------------------------------------------
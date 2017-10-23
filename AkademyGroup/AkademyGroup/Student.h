#pragma once
#include <string>

using namespace std;

#include "Person.h"
//---------------------------------------------------------------------------------------------------
class Student : public Person
{
protected:
	double average;
	double presence;
public:
	Student();
	Student(string name, string surname, int age, string phone, string email, double avarage, double presence);
	~Student();

	void setAvarage(double num);
	double getAvarage();
	void setPresence(double num);
	double getPresence();

};
//---------------------------------------------------------------------------------------------------
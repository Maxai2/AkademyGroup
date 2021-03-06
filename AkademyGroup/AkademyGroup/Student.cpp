#include "Student.h"
//---------------------------------------------------------------------------------------------------
Student::Student() : Person(){}
//---------------------------------------------------------------------------------------------------
Student::Student(string name, string surname, int age, string phone, string email, double avarage, double presence) : 
	Person(name, surname, age, phone, email)
{
	this->average = avarage;
	this->presence = presence;
}
//---------------------------------------------------------------------------------------------------
Student::~Student()
{
	this->average = 0.0;
	this->presence = 0.0;
}
//---------------------------------------------------------------------------------------------------
void Student::setAvarage(double num) { this->average = num; }
//---------------------------------------------------------------------------------------------------
double Student::getAvarage() { return this->average; }
//---------------------------------------------------------------------------------------------------
void Student::setPresence(double num) { this->presence = num; }
//---------------------------------------------------------------------------------------------------
double Student::getPresence() { return this->presence; }
//---------------------------------------------------------------------------------------------------
#include "Person.h"
//---------------------------------------------------------------------------------------------------
Person::Person(){}
//---------------------------------------------------------------------------------------------------
Person::Person(string name, string surname, int age, string phone, string email)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
	this->phone = phone;
	this->email = email;
}
//---------------------------------------------------------------------------------------------------
Person::~Person()
{
	this->name = "";
	this->surname = "";
	this->age = 0;
	this->phone = "";
	this->email = "";
}
//---------------------------------------------------------------------------------------------------
void Person::setName(string str) { this->name = str; }
//---------------------------------------------------------------------------------------------------
string Person::getName() { return this->name; }
//---------------------------------------------------------------------------------------------------
void Person::setSurname(string str) { this->surname = str; }
//---------------------------------------------------------------------------------------------------
string Person::getSurname() { return this->surname; }
//---------------------------------------------------------------------------------------------------
void Person::setAge(int num) { this->age = num; }
//---------------------------------------------------------------------------------------------------
int Person::getAge() { return this->age; }
//---------------------------------------------------------------------------------------------------
void Person::setPhone(string str) { this->phone = str; }
//---------------------------------------------------------------------------------------------------
string Person::getPhone() { return this->phone; }
//---------------------------------------------------------------------------------------------------
void Person::setEmail(string str) { this->email = str; }
//---------------------------------------------------------------------------------------------------
string Person::getEmail() { return this->email; }
//---------------------------------------------------------------------------------------------------
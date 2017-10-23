#pragma once
#include <string>

using namespace std;
//---------------------------------------------------------------------------------------------------
class Person
{
protected:
	string name;
	string surname;
	int age;
	string phone;
	string email;
public:
	Person();
	Person(string name, string surname, int age, string phone, string email);
	~Person();

	void setName(string str);
	string getName();
	void setSurname(string str);
	string getSurname();
	void setAge(int num);
	int getAge();
	void setPhone(string str);
	string getPhone();
	void setEmail(string str);
	string getEmail();
};
//---------------------------------------------------------------------------------------------------
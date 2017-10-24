#pragma once
#include <string>

#include "Student.h"
#include "Teacher.h"

using namespace std;
//---------------------------------------------------------------------------------------------------
class Group
{
protected:
	string name;
	string subject;
	Student* students[15];
	Teacher* teacher;
public:
	Group();
	~Group();

	void setName(string str);
	string getName();
	void setSubject(string str);
	string getSubject();

	void AddStud();

};
//---------------------------------------------------------------------------------------------------
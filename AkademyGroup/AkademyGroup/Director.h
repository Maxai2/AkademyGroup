#pragma once
#include "Employee.h"

//---------------------------------------------------------------------------------------------------
class Director : public Employee
{
protected:
	double rating;
public:
	Director();
	~Director();
};
//---------------------------------------------------------------------------------------------------
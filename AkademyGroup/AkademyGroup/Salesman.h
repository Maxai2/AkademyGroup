#pragma once

#include "Employee.h"
//---------------------------------------------------------------------------------------------------
class Salesman : public Employee
{
protected:
	int contracts;
public:
	Salesman();
	~Salesman();
};
//---------------------------------------------------------------------------------------------------
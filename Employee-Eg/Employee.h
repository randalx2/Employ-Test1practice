#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee
{
protected:
	string nameEmployee;  //set with constructor
	int staffNo;           //set with constructor
	float totalSalary;


public:
	static int numberOfEmployees;  //increment upon object creation
	                                //Initialize outside class
	Employee();
	Employee(const string, const int);
	~Employee();

	virtual void name() = 0;
	virtual void staffNumber() = 0;
	virtual void salary() = 0;
};

#endif
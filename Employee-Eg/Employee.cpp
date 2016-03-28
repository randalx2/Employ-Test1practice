#include "Employee.h"
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

Employee::Employee()
{
	nameEmployee = "Johnny Bravo";
	staffNo = 202515355;
	totalSalary = 0;
	numberOfEmployees++;  //Whenever ever an object is created increase employee count
}


Employee::~Employee()
{
	numberOfEmployees--;  //decrease employee count when object is deleted
}

int Employee::numberOfEmployees = 0; //Initializing the static variable outside the class

Employee::Employee(const string iname, const int inumber)
{
	nameEmployee = iname;
	
	if (inumber >= 0)
	{
		staffNo = inumber;
	}
	else
	{
		cout << "Invalid staff number. Try again now" << endl;
		cin >> staffNo;
	}

	totalSalary = 0;
	numberOfEmployees++;
}

Employee::~Employee()
{
	numberOfEmployees--;
}

SalaryEmployee::SalaryEmployee()
{
	
}

SalaryEmployee::SalaryEmployee(float imonthSalary)
{
	monthSalary = imonthSalary;
}

void SalaryEmployee::setSalary(float imonthSalary)
{
	monthSalary = imonthSalary;
}

void SalaryEmployee::name()
{

}
void staffNumber();
void salary();

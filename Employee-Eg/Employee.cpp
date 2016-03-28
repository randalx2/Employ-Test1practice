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
	cout << "Base Constructor Called" << endl;
}


Employee::~Employee()
{
	numberOfEmployees--;
	cout << "Base Destructor Called" << endl;
}

int Employee::numberOfEmployees = 0; //Initializing the static variable outside the class


SalaryEmployee::SalaryEmployee()
{
	cout << "SalaryEmployee Constuctor Called" << endl;
}

SalaryEmployee::SalaryEmployee(const string iname, const int inumber)
{
	cout << "SalaryEmployee Constuctor Called" << endl;
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

SalaryEmployee::~SalaryEmployee()
{
	cout << "SalaryEmployee Destructor Called" << endl;
	numberOfEmployees--;
}

void SalaryEmployee::setSalary(float imonthSalary)
{
	monthSalary = imonthSalary;
}

string SalaryEmployee::name()
{
	return nameEmployee;
}

int SalaryEmployee::staffNumber()
{
	return staffNo;
}
float SalaryEmployee::salary()
{
	totalSalary = monthSalary;

	return totalSalary;
}

HourlyEmployee::HourlyEmployee()
{
	cout << "Hourly Constructor called" << endl;
}

HourlyEmployee::HourlyEmployee(const string iname, const int inumber)
{
	cout << "Hourly Constructor called" << endl;
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

HourlyEmployee::~HourlyEmployee()
{
	cout << "Hourly Destructor called" << endl;
	numberOfEmployees--;
}

void HourlyEmployee::setHourlyRate(float ihourlyRate)
{
	hourlyRate = ihourlyRate;
}

void HourlyEmployee::setHoursWorked(float ihoursWorked)
{
	hoursWorked = ihoursWorked;
}

string HourlyEmployee::name()
{
	return nameEmployee;
}

int HourlyEmployee::staffNumber()
{
	return staffNo;
}
float HourlyEmployee::salary()
{
	totalSalary = hourlyRate*hoursWorked;

	return totalSalary;
}

CommissionEmployee::CommissionEmployee()
{
	cout << "Commission Constructor called" << endl;
}

CommissionEmployee::~CommissionEmployee()
{
	cout << "Commission Destructor called" << endl;
	numberOfEmployees--;
}
CommissionEmployee::CommissionEmployee(const string iname, const int inumber)
{
	cout << "Commission Constructor called" << endl;
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

void CommissionEmployee::setBaseSalary(float ibasic)
{
	basic = ibasic;
}
void CommissionEmployee::setRate(float irate)
{
	rate = irate;
}
void CommissionEmployee::setRevenue(float irev)
{
	rev = irev;
}

string CommissionEmployee::name()
{
	return nameEmployee;
}
int CommissionEmployee::staffNumber()
{
	return staffNo;
}
float CommissionEmployee::salary()
{
	totalSalary = basic + rate*rev;

	return totalSalary;
}

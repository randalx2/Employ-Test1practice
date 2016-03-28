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
	//numberOfEmployees++;  //Whenever ever an object is created increase employee count --DONT CALL THIS TWICE
}


Employee::~Employee()
{
	numberOfEmployees--;  //decrease employee count when object is deleted
}

int Employee::numberOfEmployees = 0; //Initializing the static variable outside the class

/*Employee::Employee(const string iname, const int inumber)
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
}*/

Employee::~Employee()
{
	//numberOfEmployees--;  Don't decrement here since this will happen twice if sub class calls its destructor
}

SalaryEmployee::SalaryEmployee()
{
	
}

SalaryEmployee::SalaryEmployee(const string iname, const int inumber)
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

SalaryEmployee::~SalaryEmployee()
{
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
	
}

HourlyEmployee::HourlyEmployee(const string iname, const int inumber)
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

HourlyEmployee::~HourlyEmployee()
{
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

}
CommissionEmployee::~CommissionEmployee()
{
	numberOfEmployees--;
}
CommissionEmployee::CommissionEmployee(const string iname, const int inumber)
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

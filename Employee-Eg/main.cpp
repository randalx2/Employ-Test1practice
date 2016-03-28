#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <ctime>

#include "Employee.h"

using namespace std;

int main()
{
	float totalWage = 0;

	SalaryEmployee *Praneel = new SalaryEmployee("Praneel", 202515355);
	cout << "Number of employees: " << Employee::numberOfEmployees << endl;

	HourlyEmployee *Riana = new HourlyEmployee("Riana", 203515655);
	cout << "Number of employees: " << Employee::numberOfEmployees << endl;

	CommissionEmployee *Salesh = new CommissionEmployee("Salesh", 200666666);
	cout << "Number of employees: " << Employee::numberOfEmployees << endl;

	//Set the wages
	Praneel->setSalary(18000.500);
	
	Riana->setHourlyRate(800.500);
	Riana->setHoursWorked(80);

	Salesh->setBaseSalary(8000);
	Salesh->setRate(0.85);
	Salesh->setRevenue(30000);

	cout << Praneel->name() << "'s salary is : " << Praneel->salary() << endl;
	cout << Riana->name() << "'s salary is : " << Riana->salary() << endl;
	cout << Salesh->name() << "'s salary is : " << Salesh->salary() << endl;
	
	//Creating pointer array of the abstract base class

	Employee *emp[3];

	emp[0] = Praneel;   //Since we used pointer no need to use & sign
	emp[1] = Riana;
	emp[2] = Salesh;

	//Calculating total wage
	for (int i = 0; i < 3; i++)
	{
		totalWage = totalWage + emp[i]->salary();
	}

	cout << "Total wages are : " << totalWage << endl;

	//Firing employees
	for (int i = 0; i < 3; i++)
	{
		cout << "Firing " << emp[i]->name() << endl;
		delete emp[i];
		cout << "Number of employees: " << Employee::numberOfEmployees << endl;
	}

	//When adding to a static var using constructor don't update the base constructor static var
	//When decrementing static var using destructor you can still update both base and sub destructors

	system("PAUSE");
	return 0;
}
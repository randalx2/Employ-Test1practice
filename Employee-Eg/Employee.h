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
	//Employee(const string, const int); NOT NEEDED AS YOU CAN'T CREATE AN OBJECT OF ABSTRACT CLASS
	~Employee();

	virtual string name() = 0;
	virtual int staffNumber() = 0;
	virtual float salary() = 0;
};

class SalaryEmployee : public Employee
{
private:
	float monthSalary;

public:
	SalaryEmployee();
	~SalaryEmployee();
	SalaryEmployee(const string iname, const int inumber);

	void setSalary(float imonthSalary);

	string name();
	int staffNumber();
	float salary();
};

class HourlyEmployee : public Employee
{
private:
	float hourlyRate;
	float hoursWorked;

public:
	HourlyEmployee();
	~HourlyEmployee();
	HourlyEmployee(const string iname, const int inumber);

	void setHourlyRate(float ihourlyRate);
	void setHoursWorked(float ihoursWorked);

	string name();
	int staffNumber();
	float salary();

};

class CommissionEmployee : public Employee
{
private:
	float basic;
	float rate;
	float rev;

public:
	CommissionEmployee();
	~CommissionEmployee();
	CommissionEmployee(const string iname, const int inumber);

	void setBaseSalary(float ibasic);
	void setRate(float irate);
	void setRevenue(float irev);

	string name();
	int staffNumber();
	float salary();

};

#endif
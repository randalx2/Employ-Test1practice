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
	SalaryEmployee(float imonthSalary);

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
	HourlyEmployee(float ihourlyRate, float ihoursWorked);

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
	CommissionEmployee(float ibasic, float irate, float irev);

	void setBaseSalary();
	void setRate();
	void setRevenue();

	string name();
	int staffNumber();
	float salary();

};

#endif
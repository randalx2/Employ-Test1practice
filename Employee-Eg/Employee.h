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

class SalaryEmployee : public Employee
{
private:
	float monthSalary;

public:
	SalaryEmployee();
	~SalaryEmployee();
	SalaryEmployee(float imonthSalary);

	void setSalary();

	void name();
	void staffNumber();
	void salary();
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

	void setHourlyRate();
	void setHoursWorked();

	void name();
	void staffNumber();
	void salary();

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

};

#endif
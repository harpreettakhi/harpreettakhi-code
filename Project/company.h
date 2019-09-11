#pragma once

#ifndef COMPANY_H
#define COMPANY_H

#include <iostream>
#include <string>

#ifdef _TEST
#define ECHO(X) std::cout << X << std::endl
#else 
#define ECHO(X)
#endif

class Employee
{
public:
	Employee(std::string key = "", double b = 0)
	{
		count++;
		id = 1000 + count;
		name = key;
		basic = b;
		da = 0;
		tax = 0;
		ECHO("Employee instance initialized");
	}

	~Employee()
	{
		count--;
		ECHO("Employee instance destroyed");
	}

	int GetId() const
	{
		return id;
	}

	void SetName(std::string key)
	{
		name = key;
	}

	std::string GetName() const
	{
		return name;
	}

	void SetBasic(double key)
	{
		basic = key;
	}

	double GetBaisc() const
	{
		return basic;
	}

	double GetDa() const
	{
		return da;
	}

	double GetTax() const
	{
		return tax;
	}

	static int EmployeeCount()
	{
		return count;
	}

	double CalculateSalary()
	{
		ECHO("Employee salary calculated");
		da = 0.52 * basic;
		return (basic + da);
	}

	double CalculateTax(double key = 0.0)
	{
		ECHO("Employee Tax calculated");
		tax = key * (basic + da);
		//return (basic + da) - tax;
		return tax;
	}

private:
	int id;
	std::string name;
	double basic;
	double da;
	double tax;
	static int count;
};

int Employee::count = 0;

#endif

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

typedef void* HANDLE;

HANDLE HireEmployee(int id, double salary);
void PrintEmployee(HANDLE hEmp);
void FireEmployee(HANDLE hEmp);

#endif 


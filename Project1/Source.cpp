#include<iostream>
#include "Employee.h"
#include<string>
using namespace std;

int main() {
	cout << "Count of Employees: " << Employee::getCountEmployees() << endl;
	
	Employee emp1("Vika", 20, 1200, Employee::Position::TESTER); 
	Employee emp2("Andrii", 21, 1200, Employee::Position::DEVELOPER); 

	emp1.print();
	emp2.print();

	cout << endl;
	Employee::cmpSalary(emp1, emp2);

	cout << "Count of Employees: " << Employee::getCountEmployees() << endl;

	return 0;
}
#include "Employee.h"
#include<iostream>
using namespace std;

int Employee::countEmployees = 0;

Employee::Employee()
{
	name = "Noname";
	age = 0;
	position = Employee::Position::NONE;
	salary = 0;
	id = ++countEmployees;
}

Employee::Employee(string name, int age, float salary, Position position)
{
	setName(name);
	setAge(age);
	setSalary(salary);
	setPosition(position);
	id = ++countEmployees;
}

Employee::Employee(const Employee& employee)
{
	setName(employee.name);
	setAge(employee.age);
	setSalary(employee.salary);
	setPosition(employee.position);
	id = employee.id;
}

void Employee::setName(string name)
{
	if (!name.empty()) {
		this->name = name;
	}
}

void Employee::setAge(int age)
{
	if (age <= 115 && age > 18) {
		this->age = age;
	}
}

void Employee::setSalary(float salary)
{
	if (salary > 1000) {
		this->salary = salary;
	}
}

void Employee::setPosition(Position position)
{
	if (position >= Position::NONE && position <= Position::TESTER) {
		this->position = position;
	}
}


// emp1 > emp2 = 1
// emp1 < emp2 = -1
// emp1 == emp2 = 0 
int Employee::cmpSalary(const Employee& emp1, const Employee& emp2)
{
	if (emp1.getSalary() > emp2.getSalary()) {
		cout << emp1.getName() << " > " << emp2.getName() << endl;
		return 1;
	}
	else if (emp1.getSalary() < emp2.getSalary()) {
		cout << emp1.getName() << " < " << emp2.getName() << endl;
		return -1;
	}
	else if (emp1.getSalary() == emp2.getSalary()) {
		cout << emp1.getName() << " == " << emp2.getName() << endl;
		return 0;
	}
}

string Employee::getName() const
{
	return this->name;
}

int Employee::getAge() const
{
	return this->age;
}

int Employee::getId() const
{
	return this->id;
}

float Employee::getSalary() const
{
	return this->salary;
}

string Employee::getPosition() const
{
	switch (this->position)
	{
		case Position::NONE: {
			return "NONE";
		}break;

		case Position::DESIGNER: {
			return "DESIGNER";
		}break;

		case Position::DEVELOPER: {
			return "DEVELOPER";
		}break;

		case Position::TESTER: {
			return "TESTER";
		}break;

		case Position::MANAGER: {
			return "MANAGER";
		}break;

		default: {
			return "NONE";
		}break;
	}
}

int Employee::getCountEmployees()
{
	return countEmployees;
}

void Employee::print()
{
	// ID: 1222 Name: Viktor (DEVELOPER, 4200$)
	cout << "ID: " << getId() << " Name: " << getName() << " (" << getPosition() << "," << getSalary() << "$)" << endl;
}

#pragma once
#include<string>
using namespace std;

class Employee {
public:
	enum Position { NONE, DEVELOPER, DESIGNER, MANAGER, TESTER };

	Employee();
	Employee(string name, int age, float salary, Position position);
	Employee(const Employee & employee);

	void setName(string name);
	void setAge(int age);
	void setSalary(float salary);
	void setPosition(Position position);
	static int cmpSalary(const Employee& emp1, const Employee& emp2);
	
	string getName() const;
	int getAge() const;
	int getId() const;
	float getSalary() const;
	string getPosition() const;

	static int getCountEmployees(); 
	void print();

private:
	int id;
	string name;
	int age;
	float salary;
	Position position;
	static int countEmployees;
};
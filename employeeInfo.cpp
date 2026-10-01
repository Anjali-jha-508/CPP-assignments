#include <iostream>
#include <string>
using namespace std;

class Employee {
	int id;
	string name;
	float salary, bonus, tSalary;
public:
	Employee() {
		id = 0;
		name = " "; //unknown
		salary = 0;
		bonus = 0;
	}
	Employee(int eid, string ename, float esalary, float ebonus) {
		id = eid;
		name = ename;
		salary = esalary;
		bonus = ebonus;
	}
	void totalSalary() {
		tSalary = salary + bonus;
	}
	void display() {
		cout << "Emp id = "<< id << endl;
		cout << "Emp name = "<< name << endl;
		cout << "Emp salary = "<<salary << endl;
		cout << "Emp bonus = "<< bonus << endl;
		cout << "Total Salary = "<< tSalary << endl;
	} 
};

int main() {
	Employee e1;
	e1.totalSalary();
	e1.display();

	Employee e2(101, "Neha", 20000, 200);
	e2.totalSalary();
	e2.display();
	return 0;
}

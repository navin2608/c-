#include <iostream>
#include<stdlib.h>
using namespace std;
struct emp
{
    char emp_name[50];
    int emp_id;
    int emp_age;
    float emp_salary;
};
int main()
{
	struct emp *e1,*e2,*e3;
	e1=(struct emp*)malloc(sizeof(struct emp));
	e2=(struct emp*)malloc(sizeof(struct emp));
	e3=(struct emp*)malloc(sizeof(struct emp));

	cout << "enter the name of 1st employee:" << endl;
	cin >> e1->emp_name;
	cout << "enter employee id.:" << endl;
	cin >> e1->emp_id;
	cout << "enter employee age.:" << endl;
	cin >> e1->emp_age;
	cout << "enter employee salary.:" << endl;
	cin >> e1->emp_salary;
	cout << "enter the name of 2nd employee:" << endl;
	cin >> e2->emp_name;
	cout << "enter employee id.:" << endl;
	cin >> e2->emp_id;
	cout << "enter employee age.:" << endl;
	cin >> e2->emp_age;
	cout << "enter employee salary.:" << endl;
	cin >> e2->emp_salary;
	cout << "enter the name of 3rd employee:" << endl;
	cin >> e3->emp_name;
	cout << "enter employee id.:" << endl;
	cin >> e3->emp_id;
	cout << "enter employee age.:" << endl;
	cin >> e3->emp_age;
	cout << "enter employee salary.:" << endl;
	cin >> e3->emp_salary;


	cout << "Employee Data" << endl;
	cout << "Name:" << e1->emp_name << endl;
	cout << "Employee id." << e1->emp_id << endl;
	cout << "Employee age" << e1->emp_age << endl;
	cout << "employee salary" << e1->emp_salary << endl;

	cout << "Name:" << e2->emp_name << endl;
	cout << "Employee id." << e2->emp_id << endl;
	cout << "Employee age" << e2->emp_age << endl;
	cout << "employee salary" << e2->emp_salary << endl;

	cout << "Name:" << e3->emp_name << endl;
	cout << "Employee id." << e3->emp_id << endl;
	cout << "Employee age" << e3->emp_age << endl;
	cout << "employee salary" << e3->emp_salary << endl;
	free(e1);
	free(e2);
	free(e3);
}


#include <iostream>
using namespace std;
struct EMP
{
    char emp_name[50];
    int emp_id;
    int emp_age;
    float emp_salary;
};
int main()
{
    struct EMP e1,e2,e3;
    cout << "enter details of first employee" << endl;
    cout << "enter employee name" << endl;
    cin >> e1.emp_name;
    cout << "enter employee id" << endl;
    cin >> e1.emp_id;
    cout << "enter employee age" << endl;
    cin >> e1.emp_age;
    cout << "enter employee salary" << endl;
    cin >> e1.emp_salary;
    cout << "enter details of second employee" << endl;
    cout << "enter employee name" << endl;
    cin >> e2.emp_name;
    cout << "enter employee id" << endl;
    cin >> e2.emp_id;
    cout << "enter employee age" << endl;
    cin >> e2.emp_age;
    cout << "enter employee salary" << endl;
    cin >> e2.emp_salary;
    cout << "enter details of third employee" << endl;
    cout << "enter employee name" << endl;
    cin >> e3.emp_name;
    cout << "enter employee id" << endl;
    cin >> e3.emp_id;
    cout << "enter employee age" << endl;
    cin >> e3.emp_age;
    cout << "enter employee salary" << endl;
    cin >> e3.emp_salary;

    cout << "\nDetails of employees." << endl;
    cout << "Name: " << e1.emp_name << endl;
    cout << "Id:" << e1.emp_id << endl;
    cout <<"Age: " << e1.emp_age << endl;
    cout << "Salary: " << e1.emp_salary << endl;
    cout << "Name: " << e2.emp_name << endl;
    cout << "Id:" << e2.emp_id << endl;
    cout <<"Age: " << e2.emp_age << endl;
    cout << "Salary: " << e2.emp_salary << endl;
    cout << "Name: " << e3.emp_name << endl;
    cout << "Id:" << e3.emp_id << endl;
    cout <<"Age: " << e3.emp_age << endl;
    cout << "Salary: " << e3.emp_salary << endl;
    cout << "size of the structure: " << (int)sizeof(struct EMP);

    return 0;
}

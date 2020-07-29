#include <iostream>
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
    struct emp e1;
    cout << "enter details of employee" << endl;
    cout << "enter employee name" << endl;
    cin >> e1.emp_name;
    cout << "enter employee id" << endl;
    cin >> e1.emp_id;
    cout << "enter employee age" << endl;
    cin >> e1.emp_age;
    cout << "enter employee salary" << endl;
    cin >> e1.emp_salary;
    struct emp *ptr;
    ptr=&e1;
    cout << "employee data" << endl;
    cout << "name" << ptr->emp_name << endl;
    cout << "employee id" << ptr->emp_id << endl;
    cout << "employee age" << ptr->emp_age << endl;
    cout << "employee salary" << ptr->emp_salary << endl;
    return 0;
    }

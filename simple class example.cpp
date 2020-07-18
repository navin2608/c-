#include<iostream>
#include<string>
using namespace std;
class employee
{
public:
    string name;
    int age;
};

int main()
{
    employee e1,e2;
    e1.name="navin";
    e1.age=22;
    e2.name="sudhakar";
    e2.age=16;
    cout<<"employee 1 :"<<e1.name<<e1.age;
    cout<<"employee 2 :"<<e2.name<<e2.age;
}

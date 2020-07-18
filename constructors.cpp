#include<iostream>
#include<string.h>
using namespace std;
class Person
{
public:
    string name,college;
    int age;
    Person(string name,int age,string college)
    {
        this->name=name;
        this->age=age;
        this->college=college;
    }
};
int main()
{
    Person p1("navin",22,"sona college"),p2("sudhakar",17,"srikrishna");
    cout<<p1.name<<p1.age<<p1.college;
    cout<<p2.name<<p2.age<<p2.college;

}

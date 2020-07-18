#include<iostream>

using namespace std;
class student{
public:
    void mymethod();

};
void student :: mymethod()
{
    cout<<"student is studying";
}
int main(){
student s;
s.mymethod();
}

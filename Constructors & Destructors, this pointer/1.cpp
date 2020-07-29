#include<iostream>
using namespace std;

class point
{
    public:
        int n;
        point()
        {
            n=5;
            cout<<n<<endl;
        }
};
class Queue
{
    public:
        int *que;
        Queue()
        {
            que=new int[5];
            que[0]=1;
            cout<<que[0]<<endl;
        }
};

class Employee
{
    public:
        int empid;
        Employee()
        {
            empid=5;
            cout<<empid<<endl;
        }
};

int main()
{
    point p;
    Queue Q;
    Employee E;
    return 0;
}
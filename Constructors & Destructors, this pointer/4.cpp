#include<iostream>

using namespace std;

class sample
{
    private:
        int x;
        double y;
    public:
        sample()
        {
            x=0;
            y=0;
            cout<<"End of Constructor 1:"<<endl;
            cout<<"x: "<<x<<"\t"<<"Y: "<<y<<endl;
        }
        sample(int n)
        {
            x=n;
            y=0;
            cout<<"End of Constructor 2:"<<endl;
            cout<<"x: "<<x<<"\t"<<"Y: "<<y<<endl;
        }
        sample(int n,double a)
        {
            x=n;
            y=a;
            cout<<"End of Constructor 3:"<<endl;
            cout<<"x: "<<x<<"\t"<<"Y: "<<y<<endl;
        }
};

int main()
{
    int n;
    double b;
    sample S;
    cout<<"Enter the integer: "<<endl;
    cin>>n;
    S= sample(n);
    cout<<"Enter the integer: "<<endl;
    cin>>n;
    cout<<"Enter the double value: "<<endl;
    cin>>b;
    S=sample(n,b);
    return 0;
}


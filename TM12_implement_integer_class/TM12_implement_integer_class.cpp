#include <iostream>
using namespace std;

class Constructor
{
    public:
    int x;
    Constructor()
    {
        int a=0;
        cout<<a<<endl;
    }
    Constructor(int a)
    {
        x=a;
        cout<<x<<endl;
    }
    Constructor(Constructor &i)
    {
        x=i.x;
       
    }
};
class Operators
{
    public:
    int a,b,c;
    public:
    void Assignments()
    {
        b=c=a;
        cout<<b<<endl;
    }
    void pre_post()
    {
        b=++a;
        c=a++;
        cout<<b<<" "<<c<<endl;
    }
    void plus_minus()
    {
        c+=a;
        b-=c;
        cout<<c<<endl;
        cout<<b<<endl;
    }
    friend int plus_minus_friend(Operators &s);
    void opertors_cin_cout()
    {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
};
int plus_minus_friend(Operators &s)
{
    int d;
    d=2+s.a;
    d-=3-s.b+s.c;
}
int main()
{
    Constructor c1();
    Constructor c2(3);
    Constructor c3(c2);
    cout<<c3.x<<endl;
    Operators op2;
    op2.a=3;
    op2.Assignments();
    op2.a=3;
    op2.pre_post();
    op2.a=3;
    op2.b=5;
    op2.c=7;
    op2.plus_minus();
    cout<<"d= "<<plus_minus_friend(op2);
    op2.opertors_cin_cout();
    return 0;
}

#include<iostream>
using namespace std;
void bineq(int n)
{
int a[10],i=0;
for(i=0; n>0; i++)
{
a[i]=n%2;
n= n/2;
}
cout<<"  Binary of the number= ";
for(i=i-1 ;i>=0 ;i--)
{
cout<<a[i];
}

}
int main()
{
    int n=0,bpos,temp=0;
    temp=n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Enter the bit position";
    cin>>bpos;
    bineq(n);
    temp|=(1<<bpos);
    cout<<"\nSet Bit ="<<temp;
    bineq(temp);
    temp=n;
    temp&=~(1<<bpos);
    cout<<"\nClear bit = "<<temp;
    bineq(temp);
    temp=n;
    temp=(n>>bpos)&1;
    cout<<"\nShow bit = "<<temp;

}




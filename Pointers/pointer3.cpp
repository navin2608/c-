#include <iostream>

using namespace std;

void swap(int *a,int *b )
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<"Before Swapping the numbers were: a= "<<num1<<" b= "<<num2<<endl;
    swap( &num1,&num2);
    cout<<"After Swapping the numbers are: a= "<<num1<<" b= "<<num2;
    return 0;
}

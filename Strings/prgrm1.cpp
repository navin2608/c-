#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string s1,s2;
   cout<<"enter 2 strings : ";
   cin>>s1>>s2;

   int a=s1.compare(s2);
   if(a==0)
   {
        cout<<"two string are identical";
   }

   else
    cout<<"two strings are not identical";


}

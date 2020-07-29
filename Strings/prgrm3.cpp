
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string s1,s2;
   int i,a;
   cout<<"enter 2 strings : ";
   cin>>s1>>s2;
    for(i=0;s1[i]!='\0';i++)
    {

        if(s1[i]==s2[i])
        {
        a=0;
        }
        else{
            a==1;
            break;
        }
    }
   if(a==0)
   {
        cout<<"two string are identical";
   }

   else
    cout<<"two strings are not identical";


}

#include<iostream>

using namespace std;
int main()
{
   string s1,s2;
   int i,j;
   cout<<"enter 2 strings : ";
   cin>>s1>>s2;
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>=65 && s1[i]<=92)
        {
            s1[i]=s1[i]+32;
        }
    }

    for(i=0;s2[i]!='\0';i++)
    {
        if(s2[i]>=65 && s2[i]<=92)
        {
            s2[i]=s2[i]+32;
        }
    }
   int a=s1.compare(s2);
   if(a==0)
   {
        cout<<"two string are identical";
   }

   else
    cout<<"two strings are not identical";


}

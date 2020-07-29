#include<iostream>
#include<string.h>
using namespace std;
int mystrlen(char *str)
{
   int i;
   for(i=0;str[i]!='\0';i++);
   return i;
}
int main()
{
    string s1;
    cout<<"enter a string : ";
    getline(cin,s1);

   char str[s1.size()+1];
   strcpy(str,s1.c_str());
   cout<<mystrlen(str);
}


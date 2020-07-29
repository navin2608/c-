#include<iostream>
using namespace std;
#include<string.h>
void mystrrev(char *str1,char *str2)
{
    int i,j;
    for(i=0;i<str1[i]!='\0';i++);
    i--;
    for(i,j=0;i>=0;i--)
    {
        str2[j]=str1[i];
        j++;
    }
    str2[j]='\0';
    cout<<str2;
}
int main()
{
   string s1;
    cout<<"enter a string : ";
    getline(cin,s1);
   char str1[s1.size()+1];
   strcpy(str1,s1.c_str());
   char str2[s1.size()+1];
   mystrrev(str1,str2);

}


#include<iostream>
#include<string.h>
using namespace std;
void mystrcat(char *str1,char *str2,char *str3)
{
    int i=0,j;
    for(i=0;str1[i]!='\0';i++)
    {
        str3[i]=str1[i];
    }
    for(i,j=0;str2[j]!='\0';j++,i++)
    {
        str3[i]=str2[j];
    }
    str3[i]='\0';
    cout<<str3<<" is the concatenated string ";

}
int main()
{
    string s1,s2;
    cout<<"enter two strings : ";

    getline(cin,s1);
    getline(cin,s2);

    char str1[s1.size()+1];
    strcpy(str1,s1.c_str());
    char str2[s2.size()+1];
    strcpy(str2,s2.c_str());
    char str3[s2.size()+2+s1.size()];
    mystrcat(str1,str2,str3);

}

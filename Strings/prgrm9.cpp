#include<iostream>
#include<string.h>
using namespace std;
void mystrcat(char *str1,int num,char *str2,char *str3)
{
    int i=0,j;
    char *number;
    string s;
    s=to_string(num);

    for(i=0;str1[i]!='\0';i++)
    {
        str3[i]=str1[i];
    }
    for(i,j=0;s[j]!='\0';j++,i++)
    {
        str3[i]=s[j];
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
    int num;
    cout<<"input 1 : ";
    getline(cin,s1);

    cout<<"input 3 : ";
    getline(cin,s2);

    cout<<"input 2 : ";
    cin>>num;


    char str1[s1.size()+1];
    strcpy(str1,s1.c_str());
    char str2[s2.size()+1];
    strcpy(str2,s2.c_str());
    char str3[100];
    mystrcat(str1,num,str2,str3);

}

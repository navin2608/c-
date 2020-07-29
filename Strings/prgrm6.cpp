#include<iostream>
using namespace std;
#include<string.h>
int checkidentical(char *s1,char *s2)
{
    int i,a=1;
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


    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            a=0;
            break;
        }
    }
    return a;
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
    cout<<checkidentical(str1,str2);


}

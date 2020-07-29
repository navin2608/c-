#include<iostream>
#include<string.h>
using namespace std;
void vowelstoz(char *str)
{
    int i;
    for(i=0;str[i]!='\0';i++)
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U')
    {
        str[i]='z';
    }
    cout<<str;
}
int main()
{
    string s1;
    cout<<"enter a string : ";

    getline(cin,s1);
    char str[s1.size()+1];
    strcpy(str,s1.c_str());
    vowelstoz(str);
}

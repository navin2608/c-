#include <iostream>

using namespace std;

char *my_strstr( const char *s1,  const char *s2)
{
    int count1=0,count2=0,i,j,flag;
    while(s1[count1]!='\0')
    {
        count1++;
    }
    while(s2[count2]!='\0')
    {
        count2++;
    }
    for(i=0;i<=count1-count2;i++)
    {
        for(j=i;j<i+count2;j++)
        {
            flag=1;
            if(s1[j]!=s2[j-i])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            break;
    }
     if(flag==1)
     {
        cout<<"\nSubString Found: "<<s2;
     }
    else
    {
        cout<<NULL;
    }
}

int main() 
{
	char str[80],search[10];
    cout<<"First String: ";
    cin.getline(str,79);
    cout<<"\nSecond String: ";
    cin.getline(search,9);
    my_strstr(str,search);
    
    return 0;
}

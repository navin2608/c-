#include <iostream>

using namespace std;

int main()
{
	int a[10],b[10],i,j,temp;
	for(i=0;i<10;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
	    for(j=i+1;j<10;j++)
	    {
	        if(a[i]>a[j])
	        {
	            temp=a[i];
	            a[i]=a[j];
	            a[j]=temp;
	        }
	    }
	}
	int *ptr=a;
	for(i=0;i<10;i++)
	{
	    b[i]=*ptr;
	    ptr++;
	}
	for(i=0;i<10;i++)
	{
	    cout<<b[i]<<" ";
	}
	
	return 0;
}


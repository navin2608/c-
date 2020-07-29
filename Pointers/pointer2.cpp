#include <iostream>
using namespace std;

void reversearray(int *ptr)
{
	int *ft=ptr;
	int *lt=ptr+10-1;
	while(ft<lt)
	{
		int temp=*ft;
		*ft=*lt;
		*lt=temp;
		ft++;
		lt--;
	}
	cout<<"Reversed array elements are: ";
	for(int i=0;i<10;i++)
	{
		cout<<*ptr++<<" ";
	}
}
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	reversearray(a);
	return 0;
}

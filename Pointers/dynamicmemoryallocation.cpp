#include <iostream>

using namespace std;

int main()
{
	int *var;
	var=(int*)malloc(sizeof(int));
	cout<<"Enter an integer value: \n";
	cin>>*var;
	cout<<*var<<endl;
	cout<<"The value allocated is "<<*var;
	free(var);
	return 0;
}
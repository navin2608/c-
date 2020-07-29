#include<iostream>
using namespace std;

int main(){
	int d,n1,n2;
	cin>>n1;
	cin>>n2;
	try{
		if(n2==0){
			throw 505;
		}
		else{
		d=n1/n2;
		cout<<"The division is "<<d<<endl;
		}
	} catch(...){
		cout<<"DIvision by zero condition!";
	}
	return 0;
}
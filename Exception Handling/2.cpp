#include<iostream>
#define size 10
using namespace std;
int main(){
	int A[size]={1,2,3,4,5,6,7,8,9,10},i;
	try{
		for(i=0;;i++){
			if(i!=size){
				cout<<A[i]<<endl;
			}
			else{
				throw i;
			}
		}
	}catch(int i){
		cout<<"Array Index Out of Bounds Exception : "<<i<<endl;
	}
	return 0;
}


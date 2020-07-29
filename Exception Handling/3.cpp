#include<fstream>
#include<iostream>
#include<vector>
#include<string>
#include<exception>
#include<stdlib.h>

using namespace std;

void readIntegerFile(const string& filename, vector<int>& dest){
	ifstream istr;
	int temp;
	istr.open(filename.c_str());
	if(istr.fail()){
		throw exception();
	}
	while(istr>>temp){
		dest.push_back(temp);
	}
}

int main(int argc,char** argv){
	vector<int> myInts;
	const string filename="test.txt";
	
	try{
		readIntegerFile(filename,myInts);
	}catch(const exception& e){
		cerr<<"Unable to open file "<<filename<<endl;
		exit(1);
	}
	
	for(size_t i=0;i<myInts.size();i++){
		cout<<myInts[i]<<" ";
	}
	cout<<endl;
}

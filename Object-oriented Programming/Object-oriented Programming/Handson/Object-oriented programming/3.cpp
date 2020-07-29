#include<iostream>
using namespace std;

class student{
	private:
		int admno;
		char *sname;
		float eng,math,science,total;
		
		float ctotal(){
			return eng+math+science;
		}
		
	public:
		void Readdata(int adm_no,char *s_name,float s_eng,float s_math,float s_science){
			admno=adm_no;
			sname=s_name;
			eng=s_eng;
			math=s_math;
			science=s_science;
			total=ctotal();
		}
		
		void Displaydata(){
			cout<<"admno : "<<admno;
			cout<<"\nsname : "<<sname;
			cout<<"\neng : "<<eng;
			cout<<"\nmath : "<<math;
			cout<<"\nscience : "<<science;
			cout<<"\ntotal : "<<total;
		}
		
};
int main(){
	student s1;
	int admno;
	char sname[20];
	float eng,math,science;
	cout<<"Enter admno,sname,eng,math,science: ";
	cin>>admno>>sname>>eng>>math>>science;
	
	s1.Readdata(admno,sname,eng,math,science);
	s1.Displaydata();
	
	return 0;
}
#include<iostream>
using namespace std;

class Time{
	private:
		int hour,minute,second;		
	public:
		//sets hours, mins and seconds to 0 as default values
		Time(){
				hour=0;
				minute=0;
				second=0;
		}
		
		Time(int h, int m, int s){
			hour=h;
			minute=m;
			second=s;
		}
		
		int gethour(){
			return hour;
		}
		int getmin(){
			return minute;
		}
		int getsec(){
			return second;
		}
		
		void sethour(int h){
			hour=h;
		}
		void setmin(int m){
			minute=m;
		}
		void setsec(int s){
			second=s;
		}
		Time difference(Time t2){
			// returns difference between this time and t2 as time object
			Time temp;
			temp.hour=hour-t2.hour;
			temp.minute=minute-t2.minute;
			if(temp.minute<0){
				temp.minute+=60;
				temp.hour-=1;
			}
			temp.second=second-t2.second;
			if(temp.second<0){
				temp.second+=60;
				temp.minute-=1;
			}
			return temp;
		}
		
		
		int compare(Time t2){
			//compares this time with t2 as time object
			//returns 1 if both are identical otherwise 0
			if(hour==t2.hour && minute==t2.minute && second==t2.second)
				return 1;
			else
				return 0;
		}
			
		
};

int main(){
	int h,m,s;
	Time t1(12,0,0);
	cout<<"Enter hours minutes seconds of time2: ";
	cin>>h>>m>>s;
	Time t2;
	t2.sethour(h);
	t2.setmin(m);
	t2.setsec(s);
	cout<<"\nTime 1 is : "<<t1.gethour()<<":"<<t1.getmin()<<":"<<t1.getsec();
	cout<<"\nTime 2 is : "<<t2.gethour()<<":"<<t2.getmin()<<":"<<t2.getsec();
	Time t3;
	t3=t1.difference(t2);
	cout<<"\nTime difference is: "<<t3.gethour()<<":"<<t3.getmin()<<":"<<t3.getsec();
	if(t1.compare(t2)){
		cout<<"\nTime 1 and Time 2 are identical";
	}
	else{
		cout<<"\nTime 1 and Time 2 are not identical";
	}
	return 0;
}
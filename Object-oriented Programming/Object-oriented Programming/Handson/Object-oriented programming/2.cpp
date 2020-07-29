#include<iostream>
using namespace std;

class Rect{
	private:
		float wid,hgt;
		
	public:
	
		void setWidth(float width){
			wid=width;
		}
		
		void setHeight(float height){
			hgt=height;
		}	
		
		float GetWidth(){
			return wid;
		}
		
		float GetHeight(){
			return hgt;
		}
		

};

int main(){
	float h,w;
	Rect r1;
	cout<<"Enter the width and height of rectangle: ";
	cin>>w>>h;
	r1.setWidth(w);
	r1.setHeight(h);
	cout<<"Width = "<<r1.GetWidth();
	cout<<"\nHeight = "<<r1.GetHeight();
	
	return 0;
}
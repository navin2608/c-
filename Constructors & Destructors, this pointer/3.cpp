#include<iostream>
using namespace std;
 
class Date
{
private:
    int d;
public:
  int CopyDate(void);
  Date(int d2);
  Date(const Date &d1);
 
};
 
Date::Date(int d2)  
{
  d=d2;  
}
Date::Date(const Date &d1)  
{
  d=d1.d;  
}
int Date::CopyDate( void )
{
   return d;
}

void display(Date obj) {
   cout << "d1 : " << obj.CopyDate() <<endl;
}

int main() {
    Date r(10);
    display(r);
    return 0;
}
#include<iostream>
using namespace std;
class person
{
   public:
      int count=5;
       void operator ++()
       {
          count = count+1;
       }

};
class employee:public person
{
    public:
     void Display()
      {
        cout<<"Count: "<<count;
      }
};

int main()
{
    employee e;
    ++e;
    e.Display();
    return 0;
}

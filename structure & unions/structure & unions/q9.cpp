#include <iostream>
#pragma pack(1)
using namespace std;

struct data1
{
 char c;
 int x;
};
struct data2
{
 char arr[10];
 int x;
};
struct data3
{
 char arr[10];
 long int x;
};
struct data4
{
 char arr[100];
 int x;
};
int main()
{
cout << sizeof(struct data1) << endl;
cout << sizeof(struct data2) << endl;
cout << sizeof(struct data3) << endl;
cout << sizeof(struct data4) << endl;
}


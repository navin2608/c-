#include <iostream>
using namespace std;
struct data
{
    int num1;
    int num2;
    int num3;
    int average;
};
int calaverage(struct data x)
{
    x.average=(x.num1+x.num2+x.num3)/3;
    return x.average;
}
int main()
{
    struct data d1;
    cout << "enter 1st number" << endl;
    cin >> d1.num1;
    cout << "enter 2nd number" << endl;
    cin >> d1.num2;
    cout << "enter 3rd number" << endl;
    cin >> d1.num3;
    int b=calaverage(d1);
    cout << "average of three numbers:" << b << endl;
}


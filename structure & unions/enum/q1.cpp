#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    int dailyWeight[7];
    int i;
    for(i=Sunday;i<=Saturday;i++)
    {
    	cout << "enter your weight for day:" << i+1 << endl;
    	cin >> dailyWeight[i];
	}

	cout << dailyWeight[Tuesday] << dailyWeight[Thursday] << endl;
    return 0;
}

#include <iostream>
using namespace std;
struct smemo {
 int nVal;
 char cVal;
};
union umemo {
 int nVal;
 char cVal;
};
int main()
{
	struct smemo s1;
	union umemo u1;

	cout << "enter the values for structure" << endl;
	cout << "enter nVal:" << endl;
	cin >> s1.nVal;
	cout << "enter cVal:" << endl;;
	cin >> s1.cVal;

	cout << "enter the values for union" << endl;
	cout << "enter nVal:" << endl;
	cin >> u1.nVal;
	cout << "enter cVal:" << endl;
	cin >> u1.cVal;

	cout << "the contents of structure" << endl;
	cin >> s1.nVal;
	cout << s1.cVal;

	cout << "the contents of union" << endl;
	cout << u1.nVal;
	cout << u1.cVal;

	cout << "size of the union" << sizeof(union umemo) << endl;
}

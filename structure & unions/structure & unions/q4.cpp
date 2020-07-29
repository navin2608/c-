#include <iostream>
using namespace std;
struct batsman
{
    char name[100];
    int age;
    int highest_score;
    int least_score;
    int no_of_ducks;
};
void printData(struct batsman x[])
{
    int i;
    for(i=0;i<3;i++)
    {
        cout << "name:" << x[i].name << endl;
        cout << "age" << x[i].age << endl;
        cout << "highest_score" << x[i].highest_score << endl;
        cout << "least_score" << x[i].least_score << endl;
        cout << "no_of_ducks" << x[i].no_of_ducks << endl;
    }
}
int main()
{
    int i;
    struct batsman a[3];
    cout << "enter details of the batsman" << endl;
    for(i=0;i<3;i++)
    {
        cout << "batsman" << i+1 << endl;
        cout << "enter name" << endl;
        cin >> a[i].name;
        cout << "enter age" << endl;
        cin >> a[i].age;
        cout << "enter highest score" << endl;
        cin >> a[i].highest_score;
        cout << "enter least score" << endl;
        cin >> a[i].least_score;
        cout << "enter no_of_ducks" << endl;
        cin >> a[i].no_of_ducks;
    }
    cout << "details of the batsman" << endl;
    printData(a);
}


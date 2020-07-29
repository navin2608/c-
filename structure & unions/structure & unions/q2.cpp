#include <iostream>
using namespace std;
struct student
{
    char student_name[100];
    int roll_no;
    int mark1;
    int mark2;
    int mark3;
};
int main()
{
    int i;
    struct student s[5];
    cout << "enter the student details" << endl;
    for(i=0;i<5;i++)
    {
        cout << "enter the name of the student" << endl;
        cin >> s[i].student_name;
        cout << "enter the roll number" << endl;
        cin >> s[i].roll_no;
        cout << "enter mark1" << endl;
        cin >> s[i].mark1;
        cout << "enter mark2" << endl;
        cin >> s[i].mark2;
        cout << "enter mark3" << endl;
        cin >> s[i].mark3;
    }
    float avg[5];
    for(i=0;i<5;i++)
    {
        avg[i]=(s[i].mark1+s[i].mark2+s[i].mark3)/3.0;
        cout << "the average mark of student:" << i+1 << avg[i] << endl;
    }
    int max=avg[0],min=avg[0],l=0,m=0;
    for(i=1;i<3;i++)
    {
        if(avg[i]>max){
            max=avg[i];
            l=i;
        }
        if(avg[i]<min){
            min=avg[i];
            m=i;
        }
    }
    cout << "students with highest average marks:" << s[l].student_name << endl;
    cout << "student with least average marks:" << s[m].student_name << endl;

    return 0;

}

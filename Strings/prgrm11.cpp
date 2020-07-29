
#include<iostream>
using namespace std;
int main(int argc,char* argv[])
{
    //cout<<argv[1];
    int i;
    for(i=0;argv[1][i]!='\0';i++);
    cout<<i;
}

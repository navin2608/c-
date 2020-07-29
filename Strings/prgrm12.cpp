
#include<iostream>
using namespace std;
int main(int argc,char* argv[])
{
    if(argc!=5)
        cout<<"invalid no of parameters. Try again";
    else{
        int i;
        for(i=1;i<argc;i++)
        {
            cout<<argv[i];
        }
    }
}

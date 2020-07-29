#include<iostream>
using namespace std;

class Queue{
	public:
		int *que;
		int qsize;
		int idxfront=-1;
		int idxrear=-1;
		
		void create(int N){
			qsize=N;
			que=new int[N];
		}
		
		void cleanup(){
			delete[] que;
			idxrear=-1;
			cout<<"Queue cleaned"<<endl;
		}
		
		void insert(int num){
			if(idxrear == qsize-1){
				cout<<"Queue Overflow"<<endl;
			}
			else{
				if(idxfront==-1)
					idxfront=0;
				idxrear++;
				que[idxrear]=num;
			}
		}
		
		void Remove(){
			if(idxfront==-1 || idxrear){
				cout<<"Queue Underflow "<<endl;
				return;
			}
			else{
				cout<<"Element deleted from queue is : "<<que[idxfront]<<endl;
				for(int idxfront=0;idxfront<idxrear;idxfront++)
                {
                    que[idxfront]=que[idxfront+1];
                }
                idxrear--;
			}
		}
		int size()
        {
            if(idxrear==-1)
                return 0;
            else
                return (idxrear+1);
        }
        void display()
        {
            for(int i=0;i<=idxrear;i++)
            {
                cout<<que[i]<<' ';
            }
            cout<<endl;
        }
};

int main()
{
    Queue Q;
    int ch,num;
    do
    {
        cout<<"**********************"<<endl<<"     Menu"<<endl<<"**********************"<<endl;
        cout<<"1.Create\n2.Insert\n3.Remove\n4.Sizeof queue\n5.Display Queue\n6.Cleanup\n7.exit"<<endl;
        cin>>ch;
        switch (ch)
        {
            case 1:
            {
                cout<<"Enter the size of Queue:"<<endl;
                cin>>num;
                Q.create(num);
                break;
            }
            case 2:
            {
                cout<<"Enter the value to insert:"<<endl;
                cin>>num;
                Q.insert(num);
                break;
            }
            case 3:
            {
                Q.Remove();
                break;
            }
            case 4:
            {
                cout<<"Size of queue is: "<<Q.size()<<endl;
                break;
            }
            case 5:
            {
                Q.display();
                break;
            }
            case 6:
            {
                Q.cleanup();
                break;
            }
            default:
                break;
        }
    }while(ch!=7);
    return 0;

}
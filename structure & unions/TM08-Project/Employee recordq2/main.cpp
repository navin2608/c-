#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
struct EMP
{
  int emp_id;
  string emp_name;
  EMP *next, *prev;
};
EMP *head=NULL,*tail=NULL;



int addNode()
{
    struct EMP *s, *temp;
    temp = new(struct EMP);
    cout<<"Enter employee id:"<<endl;
    cin>>temp->emp_id;
    cout<<"Enter employee name:"<<endl;
    cin>>temp->emp_name;
    temp->next = NULL;
    if (head == NULL)
    {
        temp->prev = NULL;
        head = temp;
        return 1;
    }
    else
    {
        s = head;
        while (s->next != NULL)
            s = s->next;
        s->next = temp;
        temp->prev = s;
        return 2;
    }
}

void displayList()
{
 cout<<endl<<"LINKED LIST DISPLAY"<<endl;
 cout<<endl<<"----------------------------"<<endl;
 struct EMP *temp;
 temp=head;

 while(temp!=NULL)
 {
    cout<<"EMP Name = " <<temp->emp_name<<endl;
    cout<<"EMP id = " <<temp->emp_id<<endl;
    temp=temp->next;
 }
}

int deleteNode()
{
 struct EMP *temp, *q;
 int id;
 cout<<"Enter the employee id to be deleted:";
 cin>>id;
    if (head->emp_id == id)
    {
        temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
        return 1;
    }
    q = head;
    while (q->next->next != NULL)
    {

        if (q->next->emp_id == id)
        {
            temp = q->next;
            q->next = temp->next;
            temp->next->prev = q;
            free(temp);
            return 2;
        }
        q = q->next;
    }

    if (q->next->emp_id == id)
    {
        temp = q->next;
        free(temp);
        q->next = NULL;
        return 3;
    }
    cout<<"Element "<<id<<" not found"<<endl;
    return 0;
}

void cleanUp()
{
   struct EMP *temp, *temp1;

  for (temp = head;temp;temp = temp1)
  {
    temp1 = temp->next;
    delete temp;
  }
 cout<<"All the nodes are deleted";
}

int searchNode()
{
 struct EMP *temp;
 int id,found=0;
 cout<<"Enter the employee id to be searched:" <<endl;
 cin>>id;
 temp=head;
 while(temp!=NULL)
 {
  if(temp->emp_id==id)
  {
    cout<<"The ID found"<<endl<<"EMP NAME: "<<temp->emp_name<<endl;
    found=1;
    return 1;
    break;
  }
  temp=temp->next;
 }
 if(found==0)
   return 0;
}


int main()
{
    int choice, result;
    while (1)
    {
        cout<<endl<<"--------------------------"<<endl;
        cout<<endl<<"**Main Menu**"<<endl;
        cout<<endl<<"--------------------------"<<endl;
        cout<<"1.Add Node"<<endl;
        cout<<"2.Delete Node"<<endl;
        cout<<"3.Search Node"<<endl;
        cout<<"4.Display List"<<endl;
        cout<<"5.Cleanup (Delete all nodes)"<<endl;
        cout<<"6.EXIT"<<endl;
        cout<<"Enter your option (1..6) : ";
        cin>>choice;
        switch ( choice )
        {
        case 1:
            result=addNode();
              if(result==1)
                cout<<"Head node added"<<endl;
              else
                cout<<"Non-head node added"<<endl;
            break
              ;
        case 2:
            result=deleteNode();
            if(result==1)
              cout<<"Head node deleted"<<endl;
            else if(result==2)
              cout<<"Middle node deleted"<<endl;
            else if(result==3)
              cout<<"Tail node deleted"<<endl;
            else
              cout<<"Node not found"<<endl;
            break;
        case 3:
            result=searchNode();
              if(result==0)
                cout<<"Node not found"<<endl;
              else
                cout<<"Node found and contents displayed"<<endl;
            break;
        case 4:
            displayList();
            break;
        case 5:
            cleanUp();
            break;
        case 6:
            exit(1);
        default:
            cout<<"Wrong choice"<<endl;
        }
    }
    return 0;
}

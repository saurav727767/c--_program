#include<ostream>
using namespace std;
int queue[100],n=40,front=-1,rear=-1;
void insert()
{
    int val;
    if(rear==n-1){
    cout<<"queue overflow"<<endl;
    }
    else
    {
        if(front==-1)
        front=0;
        cout<<"Insert The Element is Queue"<<endl;
        cin>>val;
        rear++;
        queue[rear]=val;
    }
}
void Delete()
{
    if(front==1||front>rear)
    {
        cout<<"Queue underflow";
        return;
    }
    else{
        cout<<"Element deleted From queue"<<endl;
        front++;

    }
}
void Display()
{
    if(front==-1)
    cout<<"queue Element are:"<<endl;
    else{
        cout<<queue[i]<<"";
        cout<<endl;
    }
}
int main()
{
    int ch;
    cout<<"1.Insert an element"<<endl;
    cout<<"2.Delete an element"<<endl;
    cout<<"3.Display all the element"<<endl;
    cout<<"4.Exit"<<endl;
    do
    {
        cout<<"Enter Your choice"<<endl;
        cin>>ch;
        switch (ch)
        {
            case 1:
            insert();
            break;
            case 2:
            Delete();
            break;
            case 3:
            Display();
            break;
            case 4:
            cout<<"Exit"<<endl;
            break;
            default:
            cout<<"choose Valid Option"<<endl;
            break;
        }
        
    }
    while (ch!=4);
    return 0;
    
}
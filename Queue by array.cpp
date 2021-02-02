#include<iostream>
using namespace std;
int queue[100];
int n=100;
int front = -1;
int rear = -1;
void insert(int val){
    if(rear == n-1){
        cout<<"Queue is Overflow."<<endl;
    }
    else{
        if(front == -1){
        front =0;
        rear++;
        queue[rear]= val;}
    }
}
void Delete(){
    if(front== -1 || front> rear){
        cout<<"Queue is underflow."<<endl;
        return ;
    }
    else{
        cout<<"Element deleted from queue is: "<<queue[front]<<endl;
        front++;
    }
}
void display(){
if(front == -1 ){cout<<"Queue is empty"<<endl;
}else{
    cout<<"Element are"<<endl;
    for (int i = front; i < = rear; i++)
    {
      cout<<queue[i]<<" ";
      cout<<endl;
    }
}
 }
int main()
{

    int ch, value;
    cout<<"1) Insert element to queue: "<<endl;
    cout<<"2) Delete element from queue: "<<endl;
    cout<<"3) Display element of queue: "<<endl;
    cout<<"4) Exit"<<endl;
    do{
        cout<<"Enter your choice: "<<" ";
        cin>>ch;
        switch (ch){
        case 1: {
            cout<<"Enter value to be insert: "<<endl;
                cin>>value;
                insert(value);
                break;
        }
        case 2: Delete();
        break;
        case 3: display();
        break;
        case 4: cout<<"Exit"<<endl;
        break;
        default: cout<<"Invaild Choice"<<endl;
        }
    } while(ch != 4);
    return 0;
}

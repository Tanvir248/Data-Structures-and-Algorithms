#include<iostream>
using namespace std;
int stack[100];
int n=100;
int top = -1;
int push(int value){
    if(top >= n-1){
        cout<<"Stack Overflow."<<endl;
    }
    else
    {
        top++;
        stack[top]= value;
    }
}
void pop(){
    if(top<= -1){
        cout<<"Stack Underflow"<<endl;
    }
    else {
        cout<<"The poped element is "<<stack[top]<<endl;
        top--;
    }
}
void display()
{
    if(top>=0){
        cout<<"Stack element are: "<<endl;
        for(int i= top; i>=0; i--)
        cout<<stack[i]<<" ";
        cout<<endl;
    }
    else {
        cout<<"Stack is empty."<<endl;
    }
}

int main()
{
    int ch, value;
    cout<<"1) Push in stack."<<endl;
    cout<<"2) Pop from stack."<<endl;
    cout<<"3) Display stack."<<endl;
    cout<<"Exit"<<endl;
    do{
        cout<<"Enter choice: "<<endl;
        cin>>ch;
        switch(ch){
            case 1:{
                cout<<"Enter value to be pusuhed: "<<endl;
                cin>>value;
                push(value);
                break;
            }
            case 2: {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            default: {
                cout<<"Invailed choice."<<endl;
            }
        }
    }while(ch != 4);
    return 0;
}
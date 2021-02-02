#include<iostream>
using namespace std;
#define CAPACITY 5
int stack[CAPACITY];
int top=-1;
void push(int x){
    if(top < CAPACITY -1){
    top = top+1;
    stack[top]= x;
    cout<<"Successfully added."<<x<<endl;
}
else {
    cout<<"Not spaces for push"<<endl;
}
}
int pop(){
    if(top>= 0){
    int val= stack[top];
    top = top - 1;
    return val;
    }
    cout<<"Stack is empty"<<endl;
    return -1;

}
int peek(){
    if(top >= 0){
    return stack[top];
    }
    else{
        cout<<"Stack is empty!"<<endl;
    }
}
int main()
{
    cout<<"Implemeneting My code for stack"<<endl;
    push(10);
    push(11);
    push(12);
    //pop();
    //pop();
    push(13);
    push(14);
   //cout<<push()<<endl;
    push(15);
    push(100);
    cout<<"pop item is: "<<pop()<<endl;
    cout<<"Peek of this stack is: "<<peek()<<endl;
    return 0;
}

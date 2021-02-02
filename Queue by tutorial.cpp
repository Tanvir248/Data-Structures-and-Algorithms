#include<iostream>
#include<stdbool.h>
using namespace std;
#define CAPACITY 5
int Queue[CAPACITY];
int front =0, rear =-1;
int totalItem = 0;
bool isFull(){
    if(totalItem == CAPACITY){
        return true;
    }
    return false;
}
bool isEmpty(){
    if(totalItem ==0){
        return true;
    }
    return false;
}
void enQueue(){
    if(isFull){
        cout<<"Queue is full"<<endl;
        return;
    }
    rear = (rear+1)% CAPACITY;
    Queue[rear] = totalItem;
    totalItem++;
}
int deQueue(){
    if(isEmpty){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    int frontItem = Queue[front];
    front=(front+1)%CAPACITY;
    totalItem--;
}
void printQueue(){
    int i;
    for(i=0; i<CAPACITY; i++){
        cout<<Queue[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    cout<<"My implementing Queue is: ";
    enQueue(2);
    enQueue(3);
    printQueue();
    enQueue(7);
    deQueue();
    enQueue(1);
    deQueue();
    enQueue(3);
    printQueue();
    enQueue(3);
    enQueue(6)

    //return 0;
}
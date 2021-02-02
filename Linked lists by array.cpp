#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
    struct Node *CreateLinkedlist(int arr[], int size){
        struct Node *head = NULL, *temp= NULL , *current= NULL;
        int i;
        for(i=0; i<size; i++){
            temp = (struct Node*) malloc(sizeof(struct Node));
            temp ->data = arr[i];
            temp -> next = NULL;
            if(head == NULL){
                head = temp;
                current = temp;
            }
            else{
                current->next = temp;
                current = current->next;
            }
        } 
        return head;
    }
    void printlist(int array[], int size){

    struct Node *head;
    head = CreateLinkedlist(array, size);
    cout<<"The listed data is : ";
        while(head != NULL){
            cout<<head->data<<"->";
            head = head->next;
        }
        cout<<"NULL"<<endl;
    }
int main()
{ 
     int t, a[100];
     cout<<"Enter the size of linked list: ";
     cin>>t;
     cout<<"Enter element: ";
        for(int i=0; i<t; i++){
            cin>>a[i];
        }
    printlist(a, t);
    return 0;
}
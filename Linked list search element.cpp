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
            temp = (struct Node *) malloc(sizeof(struct Node));
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
    int searchinlist(struct Node *head){
        int value;
        cout<<"Enter a item for search: "<<endl;
        cin>>value;
        int item =1;
        while(head != NULL){
        if(head->data == value){
            return item;
        }
        item++;
        head = head -> next;
        }
        return -1;
        
    }
    void printlist(struct Node *head){

    
    cout<<"The listed data is : ";
        while(head != NULL){
            cout<<head->data<<"->";
            head = head->next;
        }
        cout<<"NULL"<<endl;
    }
    /*void printsearchitem(){
        cout<<searchinlist();
    }*/
int main()
{ 
     int size, array[100];
     cout<<"Enter the size of linked list: ";
     cin>>size;
     cout<<"Enter element: ";
        for(int i=0; i<size; i++){
            cin>>array[i];
        }
        struct Node *head;
    head = CreateLinkedlist(array, size);
    printlist(head);
   searchinlist(head);
   /*{
    printsearchitem();}*/
    return 0;
}
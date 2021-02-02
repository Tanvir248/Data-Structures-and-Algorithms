#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
   void reverseLinkedlist(struct Node *head){
        struct Node *prev = NULL, *current = head, *next = NULL;
        while(current != NULL){
            //here store the next node
            next = current -> next;
            //reverse the link connection
            current-> next = prev;
            //propagate 
            prev = current ;
            current = next;
        }/* if i run here any void function this time here return prev nor
        working so this time we write here prev = head or head == prev*/
        head = prev;
        cout<<"The reverse listed data is : ";
        while(prev != NULL){
            cout<<prev->data<<"->";
            prev = prev->next;
        }
        cout<<"NULL"<<endl;
    }
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
    
int main()
{ 
    int a[] ={1, 2, 3, 4, 5};
    int size=  5;

     struct Node *head;
    head = CreateLinkedlist(a, size);
    struct Node *newHead= head;
    cout<<"The listed data is : ";
        while(head != NULL){
            cout<<head->data<<"->";
            head = head->next;
        }
        cout<<"NULL"<<endl;  
        reverseLinkedlist(newHead);
    return 0;
}
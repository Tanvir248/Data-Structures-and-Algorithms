#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    //int next;
    struct Node *next;  
};
//traverse a linked list
void print_List(struct Node *a = NULL){
    while(a != NULL){
        cout<<"->"<<a->data;
        a = a -> next;
    }
    cout<<endl;
}
int main()
{
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;
    a = (struct Node* ) malloc(sizeof(struct Node));
    b = (struct Node* ) malloc(sizeof(struct Node));
    c = (struct Node* ) malloc(sizeof(struct Node));
    a->data = 10;
    b->data = 20;
    c->data =30;
    a->next = b;
    b -> next = c;
    c-> next = NULL;
    print_List(a);
    
    return 0;
}
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    //int leftchild and right child for traverse a tree
    struct Node *leftChild; 
    struct Node *rightChild;
    Node(int data){
        this->data = data;
        leftChild = rightChild = NULL;
    }
};

int priOrder(struct Node *node){
    if(node == NULL){
        return 0;
    }
    cout<<node->data<<"->";
    priOrder(node ->leftChild);
    priOrder(node -> rightChild);
}
int inOrder(struct Node *node){
    if(node == NULL){
        return 0;
    }
    inOrder(node ->leftChild);
    cout<<node->data<<"->";
    inOrder(node ->rightChild);
}
int postOrder(struct Node *node){
    if(node == NULL){
        return 0;
    }

    postOrder(node->leftChild);
    postOrder(node->rightChild);
    cout<<node->data<<"->";
}
int main()
{
    struct Node *root = new Node(1);
    root->leftChild = new Node(12);
    root->rightChild = new Node(9);
    root->leftChild->leftChild = new Node(5);
    root -> rightChild->rightChild = new Node(6);
    cout<<endl;
    cout<<"Pre Order traversal is: ";
    priOrder(root);
    cout<<endl;
    cout<<"In Order traversal is: ";
    inOrder(root);
    cout<<endl;
    cout<<"Post Order traversal is: ";
    postOrder(root);
}
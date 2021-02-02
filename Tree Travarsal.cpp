#include<iostream>
using namespace std;
struct Node{
        int data;
        struct Node *leftchild;
        struct Node *rightChild;
        Node(int data){
                this->data=data;
                leftchild= rightChild = NULL;
        }
};

void Postorder(struct Node *node){
        if(node == NULL){
               return;
        }
        else{
                Postorder(node->leftchild);
                Postorder(node->rightChild);
                cout<<node->data<<"->";
        }
} 
void priorder(struct Node *node){
         if(node == NULL){
                return ;
        }
        else{
                cout<<node->data<<"->";
                priorder(node->leftchild);
                priorder(node->rightChild);
        }
} 
 void inorder(struct Node *node){
         if(node == NULL){
                return;
        }
        else{
                inorder(node ->leftchild);
                cout<<node->data<<"->";
                inorder(node->rightChild);
        }
 }
int main(){
        struct Node *root = new Node(1);
        root->rightChild  =new Node(3);
        root->leftchild   = new Node(2);
        root->leftchild->rightChild = new Node(5);
        root->leftchild->leftchild = new Node(4);
        cout<<endl<<"Preorder traversal is: ";
        priorder(root);
        cout<<endl<<"Inorder traversal is: ";
        inorder(root);
        cout<<endl<<"Postorder traversal is: ";
        Postorder(root);
}
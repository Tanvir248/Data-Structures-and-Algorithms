#include<iostream>
using namespace std;
struct Node{
  int key;
  struct Node *leftchild;
  struct Node *rightChild;
};
//create node
struct Node *newNode(int item){
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp -> key = item;
  temp ->leftchild = temp ->rightChild = NULL;
  return temp;
}
// inorder traversal
void inOdrder(struct Node *root){
  if(root != NULL){
    inOdrder(root -> leftchild);
    cout<<root->key<<" ";
    inOdrder(root -> rightChild);
  }
}
//insert a node
struct node *Insert(struct Node *node, int key){
  //return a new node if the tree is empty
  if (node == NULL) return newNode(key);

  //treverse the right place and insert the node
  if(key<node->key)
  node->leftchild = Insert(node->leftchild, key);
  else
  {
    node->rightChild = Insert(node ->rightChild, key);
  }
  
}
struct Node *minValueNode(struct Node *node){
  struct node *current = node ;
  while(current && current->leftChild != NULL){
      current= current->leftchild;
  }
  return current;
}
//Deleting Node
struct Node *DeleteNode(struct Node *root, int key){
  //return if the tree is empty.
  if(root == NULL) 
  return root;
  if(key <root->key)
  {

  root ->leftchild = DeleteNode(root->left, key);
  }
  else if(key >root->key){

  root ->rightChild = DeleteNode(root ->rightChild, key);
   }
  else {
    if(root ->leftchild == NULL){
      struct node *temp = root ->rightChild;
      free(root);
      return temp;
    }
    else if(root ->rightChild == NULL){
      struct node *temp = root ->leftchild;
      free(root);
      return temp;
    } 
     }
     //if the node has two children
     struct Node *temp = minValueNode(root -> rightChild);

     //place the inorder successor in position of the node to be deleted
     root ->key = temp ->key; 

     //Delete the inorder successor 
     root ->rightChild = DeleteNode(root ->rightChild, temp ->key);
}
//Driver code
int main(){
  struct Node *root = NULL;
  root = Insert(root , 8);
  root = Insert(root , 3);
  root = Insert(root , 1);
  root = Insert(root , 6);
  root = Insert(root , 7);
  root = Insert(root , 10);
  root = Insert(root , 14);
  root = Insert(root , 4);

  cout<<"Inorder traversal: ";
  inOdrder(root, 10);

  cout<<"Inorder traversal: ";
  inorder(root);
}
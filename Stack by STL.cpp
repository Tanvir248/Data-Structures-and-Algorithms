#include<iostream>
#include<stack>
using namespace std;
void showstack(stack<int> myStack){
    while(!myStack.empty()){
        cout<<myStack.top()<<endl;
       myStack.pop();
    }
    
}
int main()
{
    std::stack<int> myStack;
    myStack.push(10);
    myStack.push(11);
    myStack.push(21);
    myStack.push(48);
    myStack.push(101);
    myStack.pop();
   cout<< "The top value is: "<<myStack.top()<<endl;
  showstack(myStack);
  return 0;
}
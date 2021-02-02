#include<iostream>
using namespace std;
void runLoop(int n){
 int i, j;
    for(i=1; i<n; i++){
   cout<<i<<"--"<<endl;
  for(j=0; j<5; j++){
    cout<<"***"<<endl;
  
  }
    }
}
int addsum(int num){
  if(num ==1) return 1;
   else{
    return num+addsum(num-1);
   }
}
int main(){
  int number;
  cin>>number;
  int x= addsum(number);
  cout<<"total sum is: "<<x<<endl;
  //runLoop(number);
  return 0;
}
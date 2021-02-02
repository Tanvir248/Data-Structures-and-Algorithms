#include<iostream>
using namespace std;
int main(){
  int arr[9]= {2, 4, 6, 8, 12, 14, 16, 48, 87};
  int searchItem;
  cout<<"Enter a Number for search"<<endl;
  cin>>searchItem;
  int left =0; 
  int right = 8;
  int middle;
   while(left<= right){
   middle = (left+ right) /2;
   if(arr[middle]== searchItem){
     cout<<"Iteam Found at "<<middle+1<<endl;
     return 0;
   }
   else if(arr[middle]< searchItem ){
     left = middle +1;
   }
   else 
   right = middle -1;
   }
   cout<<"Iteam not found"<<endl;
   return 0;
}
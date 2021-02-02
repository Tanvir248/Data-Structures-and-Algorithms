#include<iostream>
using namespace std;
int main(){
     int arr[]= { 50, 20,10, 11, 4, 67, 0 };
     int mini = arr[6];
     for(int i=0; i<7 ;i++){
          if(arr[i]< mini){
               mini = arr[i];
          }
     }cout<<mini<<endl;
}
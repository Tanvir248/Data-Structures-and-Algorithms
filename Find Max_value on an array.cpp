#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[7]={27, 56, 710, 21, 44, 8,32 };
  int max = arr[0], sum =0;
  for(int i=0; i<7; i++){
    if(arr[i] > max )
           max = arr[i];
           cout<<"Element : "<<arr[i];
           cout<<"     Here Max is: "<<max<<endl;
  }
  cout<<"Final value is: "<<max<<endl;
}
//proper way to find out the maximum element on a array....
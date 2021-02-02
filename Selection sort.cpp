#include<iostream>
using namespace std;
int main(){
    int count=0;
int size, arr[101];
            cin>>size;
int i, j;
int lower_index;
for(int i=0; i<size; i++){
               cin>>arr[i];
                    }
for(i =0; i<size; i++){
     lower_index = i;
for(j= 0; j<size; j++){
       if(arr[j]> arr[lower_index])
              lower_index = j;


              count++;
}
int temp = arr[i];
arr[i] = arr[lower_index];
arr[lower_index] = temp;
//count++;
}
// 
cout<<count<<endl;
return 0;
}
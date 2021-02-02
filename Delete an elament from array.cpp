#include<iostream>
using namespace std;
int main(){
    int i, position, arr[]={56, 42, 44, 47, 89, 48, 81};
    int count = sizeof(arr)/sizeof(arr[0]);
    for(i= 0; i<count; i++)
        arr[i]= arr[i+1];

for(i= 0; i<count-1; i++)
        cout<<arr[i]<<" ";
        cout<<endl;
}
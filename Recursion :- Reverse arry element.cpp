#include<iostream>
using namespace std;
void reverseArray(int i, int size, int arr[]){
    if(i<size){
        reverseArray(i+1, size, arr);
        cout<<arr[i]<<" ";
    }
}
int main(){
    int i, number, array[100];
    cin>>number;
    for(i=0; i<number; i++)
    cin>>array[i];
    reverseArray(0, number, array);
    return 0;
}
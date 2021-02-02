#include<iostream>
using namespace std;
void printMaxArray(int arr[], int size,int max){
    for(int i=0; i<size; i++){
        if(arr[i]> max)
        max= arr[i];
    }
    cout<<"Maximum number of this array is: "<<endl;
    cout<<max<<endl;
}
int main(){
    int arr[]={190, 56, 30,248,  42, 48, 87, 91};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int max = arr[0];
    printMaxArray(arr, size, max);
}
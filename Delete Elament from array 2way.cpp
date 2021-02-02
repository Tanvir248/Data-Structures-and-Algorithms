#include<iostream>
using namespace std;
void deleteArray1(int arr[], int size, int position){
   int i;
   if(position>=size){
        cout<<"Deletion Eror..."<<endl;
    }
    for(i= position; i<size; i++) //here the algorithm for deleting data this place I increase 1 time 
                                // i value...
        arr[i]=arr[i+1];
       
       cout<<endl;
        cout<<"Resulted array for system one is: ";

        for(i= 0; i<size-1; i++)
        cout<<arr[i]<<" ";

}
void deleteaArray2(int arr[], int size, int position){
int i;
   if(position>=size){
        cout<<"Deletion Eror.."<<endl;
    }
  
    for(i= position; i<size; i++) {
       int temp= arr[i];
       arr[i]=arr[i+1];
       arr[i+1]= temp;
       }
       
       cout<<endl;
        cout<<"Resulted array for system two is: ";

        for(i= 0; i<size-1; i++)
        cout<<arr[i]<<" ";
    

}
int main(){
    int i, position, arr[]={56, 42, 44, 47, 89, 48, 81};
    int count = sizeof(arr)/sizeof(arr[0]);
    cout<<"Your current array is: ";
    for(i= 0; i<count; i++)
        cout<<arr[i]<<" ";

        cout<<endl;

    cout<<"Your array Size is: "<<count<<endl;

    cout<<"Enter postion to delete your data: ";
    cin>>position; 
    position--;

    deleteArray1(arr, count, position);
    deleteaArray2(arr, count, position);
}
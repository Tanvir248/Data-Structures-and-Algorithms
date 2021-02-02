#include<iostream>
using namespace std;
int main(){
    int i,position, arr[]={56, 42, 44, 47, 89, 48, 81};
    int count = sizeof(arr)/sizeof(arr[0]); //here algrithm for count array size... 
    cout<<"Your current array is: ";
    for(i= 0; i<count; i++)
        cout<<arr[i]<<" ";//this for print the value of current array...

        cout<<endl;

    cout<<"Your array Size is: "<<count<<endl; //print out the size of array

    cout<<"Enter postion to delete your data: ";
    cin>>position; //input position where you want to delete the array data...
    if(position>=count){
        cout<<"Deletion Eror"<<endl;
    }
    for(i= position-1; i<count; i++) //here the algorithm for deleting data this place I increase 1 time 
                                // i value...
        arr[i]=arr[i+1];
       
       cout<<endl;
        cout<<"Resulted array is: ";

        for(i= 0; i<count-1; i++)
        cout<<arr[i]<<" ";// print the resulted 
    
    return 0;
    }

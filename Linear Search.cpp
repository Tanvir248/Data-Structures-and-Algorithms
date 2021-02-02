#include<iostream>
using namespace std;
int main()
{
    int arr[7]={2, 6, 3, 7, 4, 5, 6};
    int search ;
    cout<<"Enter a element for search: "; 
    cin>>search;
    for(int i=0; i<sizeof(arr); i++){
        if(arr[i]== search){
            cout<<"Element found in "<<i+1<<"th position"<<endl;
            return 0;
        }
    }
    cout<<"Element not found."<<endl;
}

//Time complexity is : O(n^2)
//Space complexity is : O(1)
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 100, 4, 5};
    int size = 5;
    int flag,count = 0;
    int i, j, temp;
    for(i=0; i< size-1; i++){
        //flag =0;
        //count++;
        for(j=0; j<size-1-i; j++){
            //count ++;
            if(arr[j]> arr[j+1]){
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
               // flag =1;
            }

        }
       // if(flag ==0){break;}
    }
    cout<<"Sorted array is: ";
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   // cout<<"Total loop is: "<<count<<endl;;
        return 0;
}

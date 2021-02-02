#include<iostream>
using namespace std;
int main()
{
    int arr[101];
    int count=0, t, i, j;
    cin>>t;
    for(i=0; i<t; i++)
    cin>>arr[i];

    for(i=0; i<t; i++){
        if(arr[i] != 0){

            for(j=i+1; j<t; j++)
            {
                
                if(arr[i] == arr[j]){
                    count++;
                arr[j]=0;
                    break;
            }
        }
    }

}
 cout<<count<<endl;
    return 0;
}

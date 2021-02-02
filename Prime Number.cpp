#include<iostream>
using namespace std;
int main(){
    
    int n, i, flag=0;
    cin>>n;
    for(i=2; i<n; i++){
        if(n%i==0){
            flag = 1;
        }
    }if(flag){
        cout<<"Not prime"<<endl;
    }else{
        cout<<"Prime"<<endl;
    }
}
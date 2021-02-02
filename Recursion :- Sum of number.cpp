#include<iostream>
using namespace std;
int addNumber(int n){
       if(n==0) return 0;
     else
         return n+addNumber(n-1);
}
int main(){
        int number;
        cin>>number;
        cout<<addNumber(number)<<endl;
        return 0;
}

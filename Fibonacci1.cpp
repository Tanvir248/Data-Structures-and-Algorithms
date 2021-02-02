#include<iostream>
using namespace std;
int main()
{
    int n;
    int a=0, b=1, c;
    cin>>n;
    for(int i =2; i<=n ; i++){
            c = a+b;
            a = b;
            b = c;
    }
    cout<<"Fibonacchi = "<<b<<endl;
}
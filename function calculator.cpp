#include<iostream>
#include <iomanip>
using namespace std;
int add(double a, double b){
    return a+b;
}
int subtract(double a, double b){
    return a-b;
}
int multiply(double a, double b){
        return a*b;
}
int divide(double a, double b){
    return a/b;
}
int main(){
        double x, y;
        cout<<"Enter 1st number: ";
        cin>>x;
        cout<<"Enter 2nd number: ";
        cin>>y;
        double m = add(x, y);
        double n = subtract(x, y);
        double o = multiply(x, y);
        double p = divide(x, y);

    cout<<fixed<<setprecision(3)<<m<<endl;
	cout<<fixed<<setprecision(3)<<n<<endl;
	cout<<fixed<<setprecision(3)<<o<<endl;
	cout<<fixed<<setprecision(3)<<p<<endl;
	
}
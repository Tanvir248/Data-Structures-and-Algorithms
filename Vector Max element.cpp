#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
#define SIZE 100
int main(){
     vector<int>test;
     int n, num;
     cin>>n;
     for(int i=0; i<n; i++){
          cin>>num;
          test.push_back(num);
     }
      
cout<<*max_element(test.begin(), test.end())<<endl;
     return 0;
}
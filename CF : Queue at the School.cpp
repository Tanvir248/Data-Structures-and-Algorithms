#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define SIZE 100
void solve(){ 
            string s;
            ll n, m;
            cin>>n>>m;
           // for (int i = 0; i < n; i++)
           // {
               cin>>s;
           // }
            for (int j = 0; j < m; j++)
            {
                 for (int i = 0; i < s.size()-1; i++)
                 {       
                  if(s[i]=='B' && s[i+1]=='G'){
                            swap(s[i], s[i+1]);
                            i++;
           }
          //  else if(s[i]=='G' && s[i+1]=='G'||s[i]=='B' && s[i+1]=='B'){
          //       continue;
          //  }          
                 }
           
            }
            cout<<s<<endl;
        
}
int main(){
     solve();
     return 0;
}
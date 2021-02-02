#include<iostream>
using namespace std;
#define MX 100
int parent[MX];
void makeset(int u){
        parent[u]= u;
}
void init(){
    for(int i=1; i<=8; i++){
        makeset(i);
    }
}
int find(int u){
    if(u== parent[u]) return u;
    return find(parent[u]);
}
void Union(int u , int v){
    int p = find(u);
    int q = find(v);
    if(p != q){
        parent[q]= p;
    }
}
bool isFrined(int u , int v){
    int p = find(u);
    int q = find(v);
    return(p==q);
}
int main(){
init();
Union(1, 2);
Union(2, 3);
Union(3, 4);
Union(4, 5);
Union(5, 6);
Union(6, 7);
Union(7, 8);
if(isFrined(4, 7)){
    cout<<"They are friend!"<<endl;
}
else 
cout<<"They are not friends!"<<endl;
return 0;
}
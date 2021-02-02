#include<bits/stdc++.h>
using namespace std;
#define CAPACITY 101
vector<int> graph[CAPACITY];
bool visited[CAPACITY];
void dfs(int source){
	visited[source]=1;
	for (int i = 0; i <graph[source].size(); i++)
	{
		int next = graph[source][i];
		if(visited[next]==0){
			dfs(next);
		}
	}
	
}
int main(){
	int nodes, edges;
	cin>>nodes>>edges;
	for(int i=0; i<edges; i++){
			int u, v;
			cin>>u>>v;
			graph[u].push_back(v);
			graph[v].push_back(u);
	}
	dfs(3);
	for(int i=0; i<nodes; i++){
		if(visited[i]==1){
			cout<<"This "<<i<<" is visited."<<endl;
		}else{
			cout<<"This "<<i<<" is not visited."<<endl;
		}
	}
	return 0;
}
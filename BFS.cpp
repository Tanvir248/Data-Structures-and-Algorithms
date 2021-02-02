#include<bits/stdc++.h>
using namespace std;
#define MX 101

vector<int> graph[MX];
bool visited[MX];
int dist[MX];

void bfs(int source){
	//int dist[MX];
	queue <int> Q;
	visited[source]=1; //first visit source node
	dist[source]=0; //source node initialized 0 level for 1st node
	Q.push(source);
	while (!Q.empty())
	{
		int node = Q.front();
		Q.pop();
		for(int i=0; i<graph[node].size();i++){
			int next = graph[node][i];
			if(visited[next]==0){
				visited[next]=1; //for visit node
				dist[next]= dist[node]+1; //for update level

			Q.push(next);
			}
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
	int source;
	cin>>source;
	bfs(source);
	cout<<"From node "<<source<<endl;
	for(int i=0; i<nodes; i++){
		cout<<"Distance of "<<i<<"is "<<dist[i]<<endl;
	}

	return 0;
}
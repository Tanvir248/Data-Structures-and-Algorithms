#include<bits/stdc++.h>
using namespace std;
#define MAX 105
struct Node{
	int val;
	int cost;
};
vector<Node> graph[MAX];
bool visited[MAX];
int dist[MAX];
class compare{
	public:
	bool operator()(Node &A,Node &B ){
		if(A.cost>B.cost) return true;
		
		return false;
	}
};

void dijkstra(int source){
	priority_queue<Node, vector<Node>, compare> PQ;
	PQ.push({source, 0});
	while (!PQ.empty())
	{
		Node current = PQ.top();
		PQ.pop();
	int val = current.val;
	int cost = current.cost;
		if(visited[val]== 1) continue;// if this value is visited

		dist[val]= cost; //this is final cost
		visited[val]=1;
		for(int i=0; i<graph[val].size(); i++){
			int next  =graph[val][i].val;
			int nextcost = graph[val][i].cost;

			if(visited[next]==0)
			PQ.push({next, cost+nextcost});
		}
	}
	
}
int main(){
	int nodes, edges;
	cin>>nodes>>edges;
	for(int i=0; i<edges; i++){
		int u, v, w;
		cin>>u>>v>>w;
		graph[u].push_back({v, w});
	}
	cout<<"Enter source node: ";
	int source;
	cin>>source;
	dijkstra(source	);
	for(int i=1; i<=nodes; i++){
		cout<<"Node: "<<i<<" Distance :"<<dist[i]<<endl;
	}
	return 0;
}
/*5 6
1 2 2
1 3 1
1 4 3
2 3 1
4 5 2
5 3 5
Enter source 1; */

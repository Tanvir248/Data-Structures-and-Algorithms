#include<iostream>
using namespace std;
int matrix[100][100];
void printGraph(int matrix[100][100], int n){
	cout<<"The graph is: "<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}

}
int main(){
	int node , edges;
	cout<<"Enter Nodes: ";
	cin>>node;
	cout<<"Enter edges: ";
	cin>>edges;
	for(int i =0; i<edges; i++){
		int u , v;
		cin>>u>>v;
		matrix[u][v]= 1;
		matrix[v][u]=1;
	}
	printGraph(matrix, node);
	return 0;
}
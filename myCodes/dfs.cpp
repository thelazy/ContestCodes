#include <bits/stdc++.h>

using namespace std;

vector <int> graph[00000];
int reached[100000];

void dfs(int source){
	reached[source] = 1;
	cout<<source<<" ";
	for(int i=0; i<graph[source].size(); i++){
		if(!reached[graph[source][i]]){
			dfs(graph[source][i]);
		}
	}
}

int main(){
	int nodes, edges, source;
	int a, b;
	cin>>nodes>>edges;
	for(int i=0; i<edges; i++){
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	cin>>source;
	dfs(source);
	cout<<endl;
}
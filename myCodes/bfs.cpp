#include <bits/stdc++.h>

using namespace std;

vector <int> graph[100000];
int reached[100000];

void bfs(int source){
	queue <int> que;
	que.push(source);
	reached[source]=1;
	cout<<"Order of Access\n";
	while(!que.empty()){
		int temp = que.front();
		que.pop();
		cout<<temp<<" ";
		for(int i=0; i<graph[temp].size(); i++){
			if(!reached[graph[temp][i]]){
				que.push(graph[temp][i]);
				reached[graph[temp][i]] = 1;
			}
		}
		cout<<endl;
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
	bfs(source);
}
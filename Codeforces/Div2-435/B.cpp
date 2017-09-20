#include <bits/stdc++.h>
using namespace std;

long long int c1=0, c0=0;

void dfs(long long int node, long long int color, vector<vector<long long int> > &graph, vector<long long int> &col){
	col[node] = color;
	long long int nC;
	if(color==1){
		c1++;nC=0;
	}
	else{
		c0++;nC=1;
	}
	for(long long int i=0; i<graph[node].size(); i++){
		if(col[graph[node][i]]==-1){
			dfs(graph[node][i], nC, graph, col);
		}
	}
}	



int main(){
	long long int n, a, b;
	cin>>n;
	vector<vector<long long int> > graph(n+1, vector<long long int>(0,0));
	vector<long long int> col(n+1, -1);
	for(long long int i=1; i<n; i++){
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	dfs(1, 0, graph, col);
	long long ans = ((c1*c0)-n+1);
	cout<<ans<<endl;
	return 0;
}
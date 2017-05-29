#include <bits/stdc++.h>
using namespace std;

vector <long long> tree[10002];
long long dis= -1e18, Lnode=0;

void dfs(long long node, long long parent,  long long _dis){
	if(_dis>dis){
		dis = _dis;
		Lnode = node;
	}
	for(long long i=0; i<tree[node].size(); i++){
		if(tree[node][i]==parent)
			continue;
		dfs(tree[node][i], node, _dis+1);
	}
}


int main(){
	long long n, u, v;
	cin>>n;
	for(long long i=0; i<n-1; i++){
		cin>>u>>v;
		tree[u].push_back(v);
		tree[v].push_back(u);
	}
	dfs(1, -1, 0);
	dis = -1e18;
	dfs(Lnode, -1, 0);
	cout<<dis<<endl;
	return 0;
}
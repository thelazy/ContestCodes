#include <bits/stdc++.h>
using namespace std;

vector<int> graph[200010];
int arr[200010], ans=INT_MIN;

void dfs(int node, int parent, int dis){
	arr[node] = dis;
	for(int i=0; i<graph[node].size(); i++){
		if(graph[node][i]==parent)
			continue;
		dfs(graph[node][i], node, dis+1);
	}
}

void dfs1(int node, int parent, int dis){
	if(dis<= arr[node]){
		//cout<<node<<" "<<arr[node]<<endl;
		if(ans<2*arr[node])
			ans = 2*arr[node];
	}
	if(dis<arr[node]){
		for(int i=0; i<graph[node].size(); i++){
			if(graph[node][i]==parent)
				continue;
			dfs1(graph[node][i], node, dis+1);
		}
	}
}

 
int main(){
	int n, x, a, b;
	cin>>n>>x;
	for(int i=0; i<n-1; i++){
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	dfs(1, 0, 0);
	dfs1(x, 0, 0);
	cout<<ans<<endl;
	return 0;
}
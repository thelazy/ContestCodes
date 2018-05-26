#include<bits/stdc++.h>
using namespace std;
vector<int> graph[300000];
vector<int> vis(300000, 0);

bool heKya;

void dfs(int s){
	vis[s]++;
	if(graph[s].size()!=2){
		heKya = false;
	}
	for(int i=0; i<graph[s].size(); i++){
		if(vis[graph[s][i]]==0){
			dfs(graph[s][i]);
		}
	}
}

int main(){
	long long n, m;
	int a, b;
	cin>>n>>m;
	for(int i=0; i<m; i++){
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	int ans = 0;
	for(int i=1; i<=n; i++){
		if(vis[i]==0){
			heKya = true;
			dfs(i);
			if(heKya)
				ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
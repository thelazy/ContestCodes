#include <bits/stdc++.h>

using namespace std;

long long x;

void pottyDFS (	vector<vector<long long> > & graph,
				vector<long long> & nodeVal,
				vector<bool> & _vis,
				vector<pair<long long, pair<long long, long long> > > & nodeInfo,
				long long nodeId
			) {
	if(_vis[nodeId]) return;
	_vis[nodeId] = true;

	long long sum=0, sumGain=0, k_val=0;
	for(int i=0; i<graph[nodeId].size(); i++){
		if(!_vis[graph[nodeId][i]]) {
			pottyDFS(graph, nodeVal, _vis, nodeInfo, graph[nodeId][i]);
			sum += nodeInfo[graph[nodeId][i]].first;
			sumGain += nodeInfo[graph[nodeId][i]].second.first;
			k_val += nodeInfo[graph[nodeId][i]].second.second;
		}
	}
	sum += nodeVal[nodeId];
	nodeInfo[nodeId].first = sum;
	if(sum<0 && (-sum>x)){
		if((-sum-x) > (sumGain-(k_val*x))){
			nodeInfo[nodeId].second.first = -sum;
			nodeInfo[nodeId].second.second = 1;
			return;
		}
	}
	nodeInfo[nodeId].second.first = sumGain;
	nodeInfo[nodeId].second.second = k_val;
	return;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long t, n, u, v;
	cin>>t;
	while(t--){
		cin>>n>>x;
		vector<long long> nodeVal(n+1);
		for(int i=1; i<=n; i++)
			cin>>nodeVal[i];
		vector<vector<long long> > graph(n+1, vector<long long>());
		for(int i=0; i<(n-1); i++){
			cin>>u>>v;
			graph[u].push_back(v);
			graph[v].push_back(u);
		}
		vector<bool> _vis(n+1, false);
		vector<pair<long long, pair<long long, long long> > > nodeInfo(n+1);
		pottyDFS(graph, nodeVal, _vis, nodeInfo, 1);
		cout<<(nodeInfo[1].first+nodeInfo[1].second.first-(nodeInfo[1].second.second*x))<<endl;
	}
	return 0;
}
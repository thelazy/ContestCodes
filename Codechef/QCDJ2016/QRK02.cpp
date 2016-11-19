#include <bits/stdc++.h>

using namespace std;

vector <long long> graph[100009];
long long reached[100009];
long long arr[100009];
long long ans=0, temp=0;

void dfs(long long source){
	reached[source] = 1;
	temp += arr[source];
	for(long long i=0; i<graph[source].size(); i++){
		if(!reached[graph[source][i]]){
			dfs(graph[source][i]);
		}
	}
}

int main(){
	long long t, n, m, a, b;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld %lld", &n, &m);
		for(long long int i=1; i<=n; i++){
			graph[i].clear();
			reached[i]=0;
		}
		for(long long int i=1; i<=m; i++){
			scanf("%lld %lld", &a, &b);
			graph[a].push_back(b);
			graph[b].push_back(a);
		}
		for(long long int i=1; i<=n; i++)
			scanf("%lld", &arr[i]);
		ans=0; temp=0;
		for(long long int i=1; i<=n; i++){
			if(reached[i]==0){
				temp=0;
				dfs(i);
				if(temp>ans)
					ans=temp;
			}
		}
		printf("%lld \n", ans);
	}
	return 0;
}
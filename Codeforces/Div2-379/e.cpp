#include <bits/stdc++.h>

using namespace std;

vector <long long> graph[200001];
long int reached[200001];
int arr[200001];
long long maxi=0;
long long node;

void dfs(long long source, long long dis, long long prev){
	reached[source] = 1;
	if(arr[source]!=prev)
		dis++;
	if(dis>maxi){
		maxi=dis;
		node = source;
	}
	prev = arr[source];
	for(long long i=0; i<graph[source].size(); i++){
		if(!reached[graph[source][i]]){
			dfs(graph[source][i], dis, prev);
		}
	}
}


int main(){
	long long n, i, a, b, ans1=0, ans2=0, w=0;
	scanf("%I64d", &n);
	for(i=1; i<=n; i++)
		scanf("%I64d", &arr[i]);
	for(i=0; i<n-1; i++){
		scanf("%I64d %I64d", &a, &b);
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	maxi=0;
	dfs(1, 0, -1);
	maxi=0;
	for(i=1; i<=n; i++)
		reached[i]=0;
	dfs(node, 0, -1);
	maxi /= 2;
	printf("%I64d\n", maxi);
	return 0;
}
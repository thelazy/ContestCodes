#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector <ll> graph[100000];
int visited[100000];
ll cnt;
void fun(ll src){
	cnt++;
	visited[src]=1;
	for(ll i=0; i<graph[src].size(); i++){
		if(!visited[graph[src][i]])
			fun(graph[src][i]);
	}
}

int main(){
	ll n, m, a, b;
	cin>>n>>m;
	for(ll i=0; i<m; i++){
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	if (m!=(n-1)){
		cout<<"NO"<<endl;
	}
	else{
		fun(1);
		if(cnt==n)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
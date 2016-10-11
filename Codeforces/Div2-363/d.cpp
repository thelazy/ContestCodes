#include <bits/stdc++.h>
using namespace std;
vector <long long> graph[200009];
long long vis[200009];
long long n, i, temp, comp_no, mainroot, ans;
vector <long long> root;
long long rarr[200009], arr[200009], carr[200009];

void dfs(long long source, long long parent){
	vis[source]=1;
	for(long long j=0; j<graph[source].size(); j++){
		if(source==graph[source][j])
			rarr[comp_no]=source;
		if(!vis[graph[source][j]]){
			dfs(graph[source][j], source);
		}
		else if(graph[source][j]!=parent)
				carr[comp_no] = graph[source][j];
	}
}


int main(){
	cin>>n;
	for(i=1; i<=n; i++){
		cin>>temp;
		arr[i] = temp;
		if(temp!=i){ 
			graph[i].push_back(temp); graph[temp].push_back(i);
		}
		else{
			graph[i].push_back(i); root.push_back(i);
		}
	}
	comp_no = 0;
	for(i=1; i<=n; i++){
		if(vis[i]==0){
			comp_no++;
			dfs(i, 0);
		}
	}
	ans = comp_no-1;
	if(root.size()>0)
		mainroot = root[0];
	else{
		mainroot = carr[1];
		arr[mainroot] = mainroot;
		rarr[1] = mainroot;
		ans++;
	}
	for(i=1; i<=comp_no; i++){
		if(rarr[i]==0){
			arr[carr[i]]=mainroot;
		}
		else{
			arr[rarr[i]] = mainroot;
		}
	}
	cout<<ans<<endl;
	for(i=1; i<=n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
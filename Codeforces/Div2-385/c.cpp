#include <bits/stdc++.h>

using namespace std;

int bull[10000];
vector <int> graph[100000];
int reached[100000];
long long cnt; long long ifsp, edc;
void dfs(int source){
	cnt++;
	if(bull[source]==1)
		ifsp=1;
	reached[source] = 1;
	for(int i=0; i<graph[source].size(); i++){
		edc++;
		if(!reached[graph[source][i]]){
			dfs(graph[source][i]);
		}
	}
}

int main(){
	long long n, m, k, temp;
	cin>>n>>m>>k;
	for(int i=0; i<k; i++){
		cin>>temp;
		bull[temp]=1;
	}
	int a, b;
	for(int i=0; i<m; i++){
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	vector < long long > tt;
	long long ans=0, max=0;
	for(int i=1; i<=n; i++){
		if(!reached[i]){
			cnt=0;
			ifsp=0;
			edc=0;
			dfs(i);
			edc = edc/2;
			ans += cnt*(cnt-1)/2-edc;
			if(ifsp==0)
				tt.push_back(cnt);
			else{
				if(cnt>max)
					max=cnt;
			}

		}
	}
	for(int i=0; i<tt.size(); i++){
		ans += max*tt[i];
		max += tt[i];
	}
	cout<<ans<<endl;
	return 0;
}
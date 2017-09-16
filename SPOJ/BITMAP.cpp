#include <bits/stdc++.h>
using namespace std;

int N, M;

bool chk(int x, int y){
	if(x>=0 && x<N && y>=0 && y<M){
		return true;
	}
	return false;
}

int main(){
	int t, n, m;
	cin>>t;
	queue <pair<int, pair<int, int> > >q;
	pair<int, pair<int, int> > p;
	while(t--){
		cin>>n>>m;
		N = n;
		M = m;
		char s;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin>>s;
				if(s=='1'){
					q.push(make_pair(0, make_pair(i, j)));
				}
			}
		}
		vector<vector<int> >ans(n, vector<int>(m, -1));
		while(!q.empty()){
			p = q.front(); q.pop();
			int x = p.second.first;
			int y = p.second.second;
			if(ans[x][y]==-1){
				ans[x][y] = p.first;
				if(chk(x+1, y) && ans[x+1][y]==-1){
					q.push(make_pair(p.first+1, make_pair(x+1, y)));
				}
				if(chk(x-1, y) && ans[x-1][y]==-1){
					q.push(make_pair(p.first+1, make_pair(x-1, y)));
				}
				if(chk(x, y+1) && ans[x][y+1]==-1){
					q.push(make_pair(p.first+1, make_pair(x, y+1)));
				}
				if(chk(x, y-1) && ans[x][y-1]==-1){
					q.push(make_pair(p.first+1, make_pair(x, y-1)));
				}
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cout<<ans[i][j]<<" ";
			}
			cout<<endl;
		}

	}
	return 0;
}
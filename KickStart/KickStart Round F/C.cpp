#include <bits/stdc++.h>
using namespace std;

double fun(vector<vector<double> > &dp, vector<vector<long long> > &dist, long long c, long long &n, long long p){
	if(p==0)
		return 0;
	if(dp[c][p]!=-1)
		return dp[c][p];
	double cal=0;
	for(int i=1; i<=n; i++){
		if(i==c)
			continue;
		cal += ((double)dist[c][i] + fun(dp, dist, i, n, p-1));
	}
	dp[c][p] = ((double)(cal))/((double)(n-1));
	return dp[c][p];
}


int main(){
	long long t, n, m, p, a, b, d;
	cin>>t;
	for(int ca=1; ca<=t; ca++){
		cin>>n>>m>>p;
		vector<vector<long long> > dist(n+1, vector<long long>(n+1, 1e15));
		for(int i=0; i<m; i++){
			cin>>a>>b>>d;
			dist[a][b] = d;
			dist[b][a] = d;
		}
		for(int i=1; i<=n; i++)
			dist[i][i] = 0;
		for(int k=1; k<=n; k++){
			for(int i=1; i<=n; i++){
				for(int j=1; j<=n; j++){
					if(dist[i][k]!=1e15 && dist[k][j]!=1e15 && ((dist[i][k]+dist[k][j])<dist[i][j])){
						dist[i][j] = (dist[i][k]+dist[k][j]);
					}
				}
			}
		}
		vector<vector<double> > dp(n+1, vector<double>(200, -1));
		cout<<fixed<<setprecision(6);cout<<"Case #"<<ca<<": ";
		if(p<=199)
			cout<<fun(dp, dist, 1, n, p)<<endl;
		else{
			fun(dp, dist, 1, n, 199);
			fun(dp, dist, 1, n, 198);
			cout<<(((p-199)*(dp[1][199]-dp[1][198]))+dp[1][199])<<endl;
		}
	}
	return 0;
}
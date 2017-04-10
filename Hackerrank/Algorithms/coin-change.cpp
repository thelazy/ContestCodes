#include <bits/stdc++.h>

using namespace std;

long long s, n, dp[1000][1000], temp;
vector <int> coins;

int givDP(int i, int j){
	if(i<0||j<0)
		return 0;
	return dp[i][j];
}

int main(){
	cin>>s>>n;
	for(int i=0; i<n; i++){
		cin>>temp;
		coins.push_back(temp);
	}
	for(int i=0; i<=n; i++)
		dp[0][i]=1;
	for(int i=1; i<=s; i++){
		for(int j=1; j<=n; j++){
			dp[i][j]=dp[i][j-1]+givDP((i-coins[j-1]), j);
		}
	}
	cout<<dp[s][n]<<endl;
	return 0;
}
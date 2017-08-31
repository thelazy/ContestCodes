#include <bits/stdc++.h>
using namespace std;

void fun(vector<vector<pair<int, int> > >&dp, vector<int> &arr, int a, int b){
	if(a>b || dp[a][b].first!=INT_MAX)
		return;
	if(a==b){
		dp[a][b].first = 0;
		dp[a][b].second = arr[a];
		return;
	}
	for(int i=a+1; i<=b; i++){
		fun(dp, arr, a, i-1);
		fun(dp, arr, i, b);
		dp[a][b].first = min(dp[a][b].first, dp[a][i-1].first+dp[i][b].first+(dp[a][i-1].second * dp[i][b].second));
	}
	dp[a][b].second = (dp[a][a].second+dp[a+1][b].second)%100;
	return;
}

int main(){
	int n, temp;
	vector<int> arr;
	while(cin>>n){
		arr.clear();
		for(int i=0; i<n; i++){
			cin>>temp;
			arr.push_back(temp);
		}
		vector<vector<pair<int, int> > >dp(n, vector<pair<int, int> >(n, make_pair(INT_MAX, INT_MAX)));
		fun(dp, arr, 0, n-1);
		cout<<dp[0][n-1].first<<endl;
	}
	return 0;
}
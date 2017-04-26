#include <bits/stdc++.h>
using namespace std;
long long n, temp;
vector <long long> p;
long long dp[10000][10000];
long long fun(long long l, long long r){
	if(l>r)
		return 0;
	if(dp[l][r]!=-1)
		return dp[l][r];
	return dp[l][r]=max(fun(l+1, r) + (l-r+n)*p[l], fun(l, r-1) + (l-r+n)*p[r]);
}
int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>temp;
		p.push_back(temp);
	}
	for(int i=0; i<=n; i++)
		for(int j=0; j<=n; j++)
			dp[i][j]=-1;
	cout<<fun(0, n-1)<<endl;
	return 0;
}
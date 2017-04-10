#include <bits/stdc++.h>

using namespace std;

long long s, n;
long long wt[1000], val[1000];
long long dp[1000][1000], i, j;

int main(){
	while(1){
		cin>>s>>n;
		if(s==0 && n==0)
			break;
		for(i=0; i<n; i++){
			cin>>wt[i]>>val[i];
		}
		for(i=0; i<=n; i++){
			for(j=0; j<=s; j++){
				if(i==0||j==0)
					dp[i][j]=0;
				else{
					if(wt[i-1]<=j){
						dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);
					}
					else{
						dp[i][j] = dp[i-1][j];
					}
				}
			}
		}
		for(i=0; i<=s; i++){
			if(dp[n][i]==dp[n][s]){
				cout<<i<<" "<<dp[n][s]<<endl;
				break;
			}
		}
	}
	return 0;
}
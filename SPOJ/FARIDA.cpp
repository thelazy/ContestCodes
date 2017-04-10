#include <bits/stdc++.h>
using namespace std;
long long t, n, arr[10020], dp[10020], i, Case;
int main(){
	cin>>t;
	for(Case=1; Case<=t; Case++){
		scanf("%lld", &n);
		for(i=1; i<=n; i++)
			scanf("%lld", &arr[i]);
		dp[0]=0;
		dp[1]=arr[1];
		for(i=2; i<=n; i++){
			dp[i] = max(dp[i-1], arr[i]+dp[i-2]);
		}
		printf("Case %lld: %lld\n", Case, dp[n]);
	}
	return 0;
}
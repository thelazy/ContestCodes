#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, m, l, r, i, j;
	string s;
	cin>>n>>m;
	long long arr[n][2];
	long long dp[n][2];
	for(i=n-1; i>=0; i--){
		cin>>s;
		l = 0; r = s.length()-1;
		for(j=0; j<s.length(); j++){
			if(s[j]=='1'){
				l = j;
				break;
			}
		}
		for(j=s.length()-1; j>=0; j--){
			if(s[j]=='1'){
				r = j;
				break;
			}
		}
		arr[i][0]=l;
		arr[i][1]=r;
	}
	dp[0][1] = arr[0][1];
	dp[0][0] = 2*arr[0][1] - arr[0][0];
	if(arr[0][0]==0){
		dp[0][0]=0;
		dp[0][1]=s.length()-1;
	}
	for(i=1; i<n; i++){
		dp[i][0] = min((arr[i-1][0]+2*arr[i][1]-arr[i][0])+dp[i-1][0], (2*(m+1)-arr[i-1][1]-arr[i][0])+dp[i-1][1]);
		dp[i][1] = min((arr[i-1][0]+arr[i][1])+dp[i-1][0], (2*(m+1)-arr[i-1][1]-2*arr[i][0]+arr[i][1])+dp[i-1][1]);
		if(arr[i][0]==0){
			dp[i][0] = dp[i-1][0]+arr[i-1][0];
			dp[i][1] = dp[i-1][1]+s.length()-arr[i-1][1]-1;
		}
		dp[i][0]++;
		dp[i][1]++;
	}
	for(i=n-1; i>=0; i--){
		if(arr[i][0]!=0)
			break;
	}
	if(i==-1)
		cout<<0<<endl;
	else
		cout<<min(dp[i][0], dp[i][1])<<endl;
	return 0;
}
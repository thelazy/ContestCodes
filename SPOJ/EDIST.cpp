#include <bits/stdc++.h>

using namespace std;

long long dp[10000][10000], t, Sa, Sb, i, j;
string a, b;
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b;
		Sa = a.length(); Sb = b.length();
		dp[0][0]=0;
		for(i=1; i<=Sb; i++)
			dp[0][i]=i;
		for(i=1; i<=Sa; i++)
			dp[i][0]=i;
		for(i=1; i<=Sa; i++){
			for(j=1; j<=Sb; j++){
				if(a[i-1]==b[j-1]){
					dp[i][j]=dp[i-1][j-1];
				}
				else{
					dp[i][j]= min(min(dp[i-1][j]+1, dp[i][j-1]+1), dp[i-1][j-1]+1);
				}
			}
		}
		cout<<dp[Sa][Sb]<<"\n";
	}
	return 0;
}
#include <bits/stdc++.h>

using namespace std;
char a[6102], b[6102];
char tempC;
long long i, Sa, Sb, j;
long long int dp[6102][6102];

long long lcs(long long ii, long long jj){
	if(ii==0||jj==0){
		dp[ii][jj]=0;
		return 0;
	}
	if(dp[ii][jj]!=-1)
		return dp[ii][jj];
	dp[ii][jj] = max(lcs(ii-1, jj), lcs(ii, jj-1));
	if(a[ii-1]==b[jj-1]){
		dp[ii][jj]=max(dp[ii][jj], lcs(ii-1, jj-1)+1);
	}
	return dp[ii][jj];
}

int main(){
	long long t;
	scanf("%lld", &t);
	while(t--){
		scanf("%s", a);
		for(Sa=0; a[Sa]!='\0'; Sa++){}
		Sb = Sa;
		for(i=0; i<=Sa/2; i++){
			b[i] = a[Sa-1-i];;
			b[Sa-1-i] = a[i];
		}
		for(i=0; i<=Sa; i++)
			for(j=0; j<=Sb; j++)
				dp[i][j]=-1;
		lcs(Sa, Sb);
		cout<<Sa-dp[Sa][Sb]<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>

using namespace std;
bool chk[3000];
string arr[3000];

int main(){
	long long t, n, k, i, j, len, temp, ans;
	string cmp="";
	scanf("%lld", &t);
	while(t--){
		scanf("%lld", &n);
		scanf("%lld", &k);
		cmp="";
		for(i=1; i<=k; i++)
			cmp+='1';
		for(i=1; i<=n; i++){
			for(j=1; j<=k; j++)
				chk[j]=0;
			cin>>len;
			for(j=0; j<len; j++){
				scanf("%lld", &temp);
				chk[temp]=1;
			}
			arr[i]="";
			for(j=1; j<=k; j++){
				if(chk[j]==1)
					arr[i] += '1';
				else
					arr[i] += '0';
			}
		}
		ans = 0;
		for(i=1; i<n; i++){
			for(j=i+1; j<=n; j++){
				int flag=1;
				for(int tt=0; tt<k; tt++){
					if((arr[i][tt]=='0')&&(arr[j][tt]=='0')){
						flag=0;
						break;
					}
				}
				if(flag)
					ans++;
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}
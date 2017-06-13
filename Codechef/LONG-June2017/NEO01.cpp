#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;
long long arr[100010];
 
int main(){
	long long t, n, i, ans, temp;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld", &n);
		for(i=1; i<=n; i++)
			scanf("%lld", &arr[i]);
		sort(arr+1, arr+1+n);
		arr[0]=0;
		for(i=1; i<=n; i++)
			arr[i] += arr[i-1];
		ans = -1e18;
		for(i=0; i<=n; i++){
			temp = ((arr[i]-arr[0]) + ((n-i)*(arr[n]-arr[i])));
			if(temp>ans)
				ans = temp;
		}
		printf("%lld\n", ans);
	}
	return 0;
}
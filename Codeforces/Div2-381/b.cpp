#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, k, a, b;
	cin>>n>>k;
	scanf("%I64d %I64d", &n, &k);
	long long arr[n+1]; 
	arr[0]=0;
	for(long long i=1; i<=n; i++){
		scanf("%I64d", &arr[i]);
		arr[i] += arr[i-1];
	}
	long long ans[k];
	for(long long i=0; i<k; i++){
		scanf("%I64d %I64d", &a, &b);
		ans[i] = arr[b]-arr[a-1];
	}
	sort(ans, ans+k);
	long long i=k-1, toPrint=0;
	while(i>=0&&ans[i]>0){
		toPrint += ans[i];
		i--;
	}
	cout<<toPrint<<endl;
	return 0;
}
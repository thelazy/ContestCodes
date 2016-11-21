#include <bits/stdc++.h>

using namespace std;
long long ans=0;
void Merge1(long long arr[], long long l, long long r){
	long long temp[r-l+1], i=l, j=(r+l)/2+1, ii, jj, ind=0;
	ii = j-1; jj = r;
	for(i, j;i<=ii&&j<=jj;){
		if(arr[j]<arr[i]){
			ans += (ii-i+1);
			temp[ind++] = arr[j++];
		}
		else{
			temp[ind++] = arr[i++];
		}
	}
	while(i<=ii)
		temp[ind++] = arr[i++];
	while(j<=jj)
		temp[ind++] = arr[j++];
	ind=0;
	for(i=l; i<=r; i++){
		arr[i] = temp[ind++];
	}

}

void mSort(long long arr[], long long l, long long r){
	if(l<r){
		mSort(arr, l, (l+r)/2);
		mSort(arr, (l+r)/2+1, r);
		Merge1(arr, l, r);
	}
}
int main(){
	long long t, n;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld", &n);
		long long arr[n];
		for(long long i=0; i<n; i++)
			scanf("%lld", &arr[i]);
		ans=0;
		mSort(arr, 0, n-1);
		printf("%lld\n", ans);
	}
	return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	long long n, m, i, prev=1, j, l, r, k, mi, t1, t2;
	scanf("%lld %lld", &n, &m);
	long long arr[n+1], arr1[n+1], arr2[n+1];
	for(i=1; i<=n; i++)
		scanf("%lld", &arr[i]);
	for(i=2; i<=n; i++){
		if(arr[i]!=arr[i-1]){
			for(j=prev; j<=(i-1); j++){
				arr1[j]=prev; arr2[j]=i-1;
			}
			prev=i;
		}
	}
	for(j=prev; j<=(i-1); j++){
		arr1[j]=prev; arr2[j]=i-1;
	}
	for(i=1; i<=m; i++){
		scanf("%lld %lld %lld", &l, &r, &k);
		mi = (l+r)/2;
		if(arr1[mi]<l)
			t1 = l;
		else
			t1 = arr1[mi];
		if(arr2[mi]>r)
			t2 = r;
		else
			t2 = arr2[mi];
		if((t2-t1+1)>=k)
			printf("%lld\n", arr[mi]);
		else
			printf("-1\n");
	}
	return 0;
} 
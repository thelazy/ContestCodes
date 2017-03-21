#include <bits/stdc++.h>
using namespace std;

bool comp(long long a, long long b){
	return a>b?true:false;
}

int main(){
	long long t, n, a, arr[10000], i, j, temp;
	cin>>t;
	for(i=1; i<=t; i++){
		scanf("%lld %lld", &a, &n);
		temp=0;
		for(j=0; j<n; j++){
			scanf("%lld", &arr[j]); temp+=arr[j];
		}
		printf("Scenario #%lld:\n", i);
		if(temp>=a){
			sort(arr, arr+n, comp);
			temp=0;
			for(j=0; j<n; j++){
				temp+=arr[j];
				if(temp>=a)
					break;
			}
			printf("%lld\n\n", j+1);
		}
		else{
			printf("impossible\n\n");
		}
	}
	return 0;
}

struct abc{
	int a;
	abc(int d){
	 	a=d;
	}
};
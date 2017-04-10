#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, arr[100001], i;
	while(1){
		scanf("%lld",&n);
		if(n==0)
			break;
		for(i=1; i<=n; i++)
			scanf("%lld",&arr[i]);
		int flag=0;
		for(i=1; i<=n; i++){
			if(arr[arr[i]]!=i){
				flag = 1;
				break;
			}
		}
		if(flag)
			printf("not ambiguous\n");
		else
			printf("ambiguous\n");
	}
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, k, a, b, min=1e10;
	scanf("%lld %lld", &n, &k);
	while(k--){
		scanf("%lld %lld", &a, &b);
		if(b-a<min)
			min = b-a;
	}
	printf("%lld\n", min+1);
	min++; a=0;
	while(n--){
		printf("%lld ", a);
		a = (++a);
		a = a%min;
	}
	printf("\n");
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, temp, ans=0;
	scanf("%lld", &n);
	while(n--){
		scanf("%lld", &temp);
		ans ^= temp;
	}
	printf("%lld", ans);
	return 0;
}
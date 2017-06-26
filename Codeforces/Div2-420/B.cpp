#include <bits/stdc++.h>
using namespace std;

int main(){
	long long m, b, ans=1;
	scanf("%I64d %I64d", &m, &b);

	for(long long y=b; y>=0; y--){
		ans = max(ans, (((m*(b-y))+1)*(y+1)*((m*(b-y))+y)/2));
	}
	printf("%I64d\n", ans);
	return 0;
}
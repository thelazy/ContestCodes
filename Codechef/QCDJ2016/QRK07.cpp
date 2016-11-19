#include <bits/stdc++.h>

using namespace std;

int main(){
	long long t, n, temp, cnt;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld", &n);
		cnt=0;
		for(long long i=0; i<n; i++){
			scanf("%lld", &temp);
			if(temp%2!=0)
				cnt++;
		}
		if(cnt%2==0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long a, b, temp, ans;
	while(1){
		scanf("%lld %lld", &a, &b);
		if(a==-1 || b==-1)
			break;
		if(a<b){
			temp=a; a=b; b=temp;
		}
		ans = a/(b+1);
		if(a%(b+1)!=0)
			ans++;
		printf("%lld\n", ans);
	}
	//cout<<endl;
	return 0;
}
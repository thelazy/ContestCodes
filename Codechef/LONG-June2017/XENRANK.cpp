#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t, u, v, sum, start;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld %lld", &u, &v);
		cout<<(((u+v)*(u+v+1)/2)+1+u)<<endl;
	}
	return 0;
}
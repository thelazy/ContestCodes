#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e9+7;

long long fun(long long n){
	if(n==0)
		return 1;
	if(n%2==0){
		return ((fun(n/2)*fun(n/2))%MOD);
	}
	return (((10*fun(n/2))%MOD)*fun(n/2))%MOD;
}

int main(){
	long long t, n, w, ans, temp, temp1;
	cin>>t;
	//cout<<fun(5)<<endl;
	while(t--){
		cin>>n>>w;
		if(w>8 || w<-9){
			cout<<0<<endl;
			continue;
		}
		ans = 0;
		for(int i=0; i<=9; i++){
			for(int j=1; j<=9; j++){
				if(i-j==w)
					ans++;
			}
		}
		n -= 2;
		ans = (ans*fun(n))%MOD;
		cout<<ans<<endl;
	}
	return 0;
}
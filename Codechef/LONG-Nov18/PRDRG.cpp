#include<bits/stdc++.h>
using namespace std;


long long pow2(long long n){
	long long mul=2;
	long long ret =1;
	for(int i=0; i<n; i++)
		ret *= mul;
	return ret;
}

int main(){
	long long t, n;
	cin>>t;
	long long ans[26];
	ans[1] = 1;
	for(int i=2; i<=25; i++){
		if(i%2==0){
			ans[i] = ans[i-1]*2-1;
		}
		else
			ans[i] = ans[i-1]*2+1;
	}
	while(t--){
		cin>>n;
		cout<<ans[n]<<" "<<pow2(n)<<" ";
	}
	return 0;
}

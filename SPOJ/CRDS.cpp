#include <bits/stdc++.h>
using namespace std;

long long mod = 1000007, a, b;

long long fun(long long n){
	a =  ((3*n*n+n)/2);
	a = a%mod;
	return a;
}

int main(){
	long long t, n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<fun(n)<<endl;
	}
	return 0;
}
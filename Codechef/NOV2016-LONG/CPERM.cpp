#include <bits/stdc++.h>
using namespace std;

long long modu = pow(10, 9)+7;

long long fun(long long a, long long b){
	if(b==1)
		return a%modu;
	else{
		if(b%2==0){
			return fun((a*a)%modu, b/2);
		}
		else{
			return (fun((a*a)%modu, (b-1)/2)*a)%modu;
		}
	}
}

int main(){
	long long t, n;
	cin>>t;
	while(t--){
		cin>>n;
		if(n>2){
			cout<<fun(2,n-1)%modu-2<<endl;
		}
		else
			cout<<0<<endl;
	}
	return 0;
}
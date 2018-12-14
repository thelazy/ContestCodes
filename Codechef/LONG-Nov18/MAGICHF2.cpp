#include <bits/stdc++.h>

using namespace std;

bool rem;

long long divN(long long n){
	switch(n%4){
		case 0:
			return (n/2);
		case 1:
			return (n/2 + 1);
		case 3:
			return (n/2 + 1);
		default:
			;
	}
	if(rem){
		return (n/2);
	}
	return (n/2 + 1);
}


int main(){
	long long t, n, k, a, b, c, d;
	double ans;
	//rem = false;
	cin>>t;
	cout<<fixed;
	//cout<<divN(6)<<endl;
	while(t--){
		cin>>n>>k;
		rem = false;
		if(n==1){
			cout<<setprecision(15)<<1.0<<endl;
		}
		else if(n==2){
			cout<<setprecision(15)<<0.5<<endl;
		}
		else{
			while(k-- && n>1){
				n = divN(n);
				rem = true;
			}
			ans = ((double)(1)/((double)n));
			cout<<setprecision(15)<<ans<<endl;
		}
	}
	return 0;
}
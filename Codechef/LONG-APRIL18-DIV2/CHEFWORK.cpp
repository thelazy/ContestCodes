#include<bits/stdc++.h>
using namespace std;

long long MAXI = 1e18;

int main(){
	long long n, ma=MAXI, mb=MAXI, mc=MAXI, temp;
	cin>>n;
	vector<long long> coins(n);
	for(int i=0; i<n; i++){
		cin>>coins[i];
	}
	for(int i=0; i<n; i++){
		cin>>temp;
		if(temp==1){
			ma = min(ma, coins[i]);
		}
		else if(temp==2){
			mb = min(mb, coins[i]);
		}
		else{
			mc = min(mc, coins[i]);
		}
	}
	if(ma==MAXI || mb==MAXI){
		if(mc!=MAXI){
			cout<<mc<<endl;
		}
	}
	else{
		if(mc==MAXI){
			cout<<ma+mb<<endl;
		}
		else{
			cout<<min(ma+mb, mc)<<endl;
		}
	}
	return 0;
}
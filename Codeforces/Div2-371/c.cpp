#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

long long con(long long n){
	long long t, mul=1; int temp;
	t=0;
	while(n>0){
		temp = n%10; n = n/10;
		if(temp%2==0){
			mul = mul*10;
		}
		else{
			t = t + mul;
			mul = mul*10;
		}
	}
	return t;
}

int main(){
	long long q, n;
	char c;
	cin>>q;
	unordered_map<long long, long long> eve;
	while(q--){
		cin>>c;
		cin>>n;
		n = con(n);
		if(c=='+'){
			if ( eve.find(n) == eve.end() ) {
  				eve[n]=1;
			} 
			else {
  				eve[n]++;
			}
		}
		if(c=='-')
			eve[n]--;
		if(c=='?')
			cout<<eve[n]<<endl;

	}
	return 0;
}
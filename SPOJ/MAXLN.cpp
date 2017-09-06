#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t, r;
	cin>>t;
	for(int i=1; i<=t; i++){
		cin>>r;
		r = (4*r*r);
		cout<<"Case "<<i<<": "<<r<<".25"<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	cin>>n;
	if(n%2==0){
		cout<<n/2<<endl;
		for(long long i=0; i<n/2; i++)
			cout<<2<<" ";
		cout<<endl;
	}
	else{
		cout<<n/2<<endl;
		for(long long i=0; i<(n/2)-1; i++)
			cout<<2<<" ";
		cout<<3<<endl;
	}
	return 0;
}
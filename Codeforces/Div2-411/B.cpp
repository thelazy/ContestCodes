#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n==1){
		cout<<"a"<<endl;
	}
	else{
		int rem = n%2;
		char lp;
		n = n-rem;
		for(int i=0; i<n/2; i++){
			if(i%2==0){
				lp = 'a';
				cout<<"aa";
			}
			else{
				lp = 'b';
				cout<<"bb";
			}
		}
		if(rem){
			if(lp=='a')
				cout<<'b';
			else
				cout<<'a';
		}
		cout<<endl;
	}
	return 0;
}
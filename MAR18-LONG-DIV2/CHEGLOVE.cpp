#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t, n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> L(n);
		vector<int> G(n);
		for(int i=0; i<n; i++)
			cin>>L[i];
		for(int i=0; i<n; i++)
			cin>>G[i];
		bool front = true, back = true;
		int i=0;
		for(; i<n; i++){
			if(G[i]<L[i])
				break;
		}
		if(i!=n){
			front = false;
		}
		i=0;
		for(; i<n; i++){
			if(G[n-i-1]<L[i])
				break;
		}
		if(i!=n){
			back = false;
		}
		if(front && back){
			cout<<"both\n";
		}
		else if(front){
			cout<<"front\n";
		}
		else if(back){
			cout<<"back\n";
		}
		else{
			cout<<"none\n";
		}
	}
}
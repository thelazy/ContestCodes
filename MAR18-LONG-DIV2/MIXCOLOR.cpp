#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t, n, uc, temp;
	cin>>t;
	while(t--){
		cin>>n;
		uc = 0;
		unordered_set<ll> st;
		for (int i = 0; i < n; ++i){
			cin>>temp;
			if(st.find(temp)==st.end()){
				st.insert(temp);
				uc++;
			}
		}
		cout<<n-uc<<endl;
	}
	return 0;
}
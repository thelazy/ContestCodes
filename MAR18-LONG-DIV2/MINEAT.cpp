#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool doable(vector<ll> &vec, ll mid, ll h){
	ll cnt = 0;
	for(int i=0; i<vec.size(); i++){
		cnt += ((vec[i]+mid-1)/mid);
		if(cnt>h)
			return false;
	}
	return true;
}

int main(){
	ll t, n, h, l, r, ans, mid;
	cin>>t;
	while(t--){
		cin>>n>>h;
		vector<ll> vec(n);
		for(int i=0; i<n; i++){
			cin>>vec[i];
		}
		l = 1;
		r = 1e18;
		ans = 1e18;
		while(l<=r){
			mid = (l+r)/2;
			if(doable(vec, mid, h)){
				ans = mid;
				r = mid-1;
			}
			else{
				l = mid+1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t, n;
	double ans;
	cin>>t;
	while(t--){
		cin>>n;
		vector<double> price(n);
		vector<ll> quan(n);
		vector<double> discount(n);
		for(int i=0; i<n; i++){
			cin>>price[i]>>quan[i]>>discount[i];
		}
		ans = 0;
		for(int i=0; i<n; i++){
			ans += ((price[i]*discount[i]*discount[i]/((double)10000))*((double)quan[i]));
		}
		std::cout << std::setprecision(9)<< std::fixed;
		cout<<ans<<endl;
	}
	return 0;
}
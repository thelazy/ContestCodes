#include <bits/stdc++.h>
using namespace std;

long long ten6 = pow(10, 6);

int main(){
	long long t;
	double s, v, ans;
	cin>>t;
	while(t--){
		cin>>s>>v;
		ans = 2*s/(3*v);
		cout<<fixed<<ans<<endl;
	}
	return 0;
}
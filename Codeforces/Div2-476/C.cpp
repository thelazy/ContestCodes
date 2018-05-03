#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, k, m, d, i, ans=-1, candies_per_person;
	cin>>n>>k>>m>>d;
	for(i=1; i<=d; i++){
		candies_per_person = min((n/((k*(i-1))+1)), m);
		if(candies_per_person==0)
			break;
		ans = max(ans, candies_per_person*i);
	}
	cout<<ans<<endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, t, ans;
	cin>>t;
	while(t--){
		cin>>n;
		ans = ((((n*(n+1))/2)+((n*(n+1)*(2*n+1))/6))/2);
		if(n%2==0){
			n /= 2;
			ans += (((n*(n+1)*(2*n+1))/3) - ((n*(n+1))/2));
		}
		else{
			n /= 2;
			ans += (((n*(n+1)*(2*n+1))/3) + ((n*(n+1))/2));
		}
		cout<<ans<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t, n, ans, temp;
	cin>>t;
	while(t--){
	    ans=0;
	    cin>>n;
	    for(long long int i=0; i<n; i++){
	        cin>>temp;
	        ans += temp;
	    }
	    ans -= (n-1);
	    cout<<ans<<endl;
	}
	return 0;
}

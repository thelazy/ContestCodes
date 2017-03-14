#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t, n, i, j, ans;
	cin>>t;
	while(t--){
		cin>>n;
		int arr;
		ans=0;
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				cin>>arr;
				ans += arr;
			}
		}
		if(ans<=n){
			cout<<0<<endl;
		}
		else{
			ans -= n;
			int i=1;
			while(ans > 2*(n-i)){
				ans -= (2*(n-i));
				i++;
			}
			cout<<i<<endl;
		}
	}
	return 0;
}
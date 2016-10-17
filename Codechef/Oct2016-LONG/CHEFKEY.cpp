#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t, n, m, c, ans, i, j;
	cin>>t;
	while(t--){
		cin>>n>>m>>c;
		ans = 0;
		for(i=1; i<=n; i++){
			if(c%i==0){
				if((c/i)<=m)
					ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
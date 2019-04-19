#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t, n, ans;
	cin>>t;
	while(t--){
		cin>>n;
		vector<long long> a(n);
		vector<long long> d(n);
		for(int i=0; i<n; i++)
			cin>>a[i];
		for(int i=0; i<n; i++)
			cin>>d[i];
		ans=-1;
		for(int i=0; i<n; i++){
			if(((a[(i-1+n)%n] + a[(i+1)%n])<d[i]) && d[i]>ans)
				ans = d[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t, n, k, ans;
	int temp, zc;
	vector <int> z;
	cin>>t;
	while(t--){
		cin>>n>>k;
		zc = 0;
		z.clear();
		z.push_back(0);
		for(int i=1; i<=n; i++){
			cin>>temp;
			if(!temp){
				z.push_back(i);
				zc++;
			}
		}
		z.push_back(n+1);
		ans = -1e18;
		if(zc<=k)
			cout<<n<<endl;
		else{
			for(int i=1; i<(z.size()-k); i++){
				if((z[i+k]-z[i-1]-1)>ans)
					ans = (z[i+k]-z[i-1]-1);
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t, n, temp;
	long long ans;
	cin>>t;
	while(t--){
		cin>>n;
		ans = 0;
		vector<long long> v(6001, 0);
		for(long long i=0; i<n; i++){
			cin>>temp;
			v[temp+3000]++;
		}

		for(long long i=0; i<=6000; i++){
			for(long long j=i; j<=6000; j++){
				if(i==j){
					ans += ((v[i]*(v[i]-1))/2);
				}
				else{
					if(((i+j)%2==0) && v[(i+j)/2]>0){
						ans += (v[i]*v[j]);
					}
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
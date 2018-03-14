#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool canVote(int j, int i, vector<ll> &arr){
	if(i==j)
		return false;
	if(j<i){
		if((arr[j]-arr[j-1])>=(arr[i-1]-arr[j])){
			return true;
		}
		return false;
	}
	else{
		if((arr[j]-arr[j-1])>=(arr[j-1]-arr[i])){
			return true;
		}
		return false;
	}
	return false;
}

int main(){
	ll t, n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<ll> arr(n+1);
		vector<ll> pSum(n+1, 0);
		vector<ll> sSum(n+1, 0);
		vector<ll> ans(n+3, 0);
		arr[0] = 0;
		for(int i=1; i<=n; i++){
			cin>>arr[i];
			pSum[i] = pSum[i-1]+arr[i];
		}
		for(int i=n; i>=1; i--){
			sSum[n-i+1] = sSum[n-i]+arr[i];
		}
		for(int i=1; i<=n; i++){
			//cout<<i<<" -> ";
			int temp = upper_bound(pSum.begin(), pSum.end(), pSum[i]+arr[i])-pSum.begin();
			//cout<<temp+1<<" ";
			ans[temp+1]--;
			temp = upper_bound(sSum.begin(), sSum.end(), sSum[n-i+1]+arr[i])-sSum.begin();
			ans[n-temp+1]++;
			//cout<<n-temp+1<<endl;

		}
		for(int i=1; i<=n; i++){
			ans[i]+=ans[i-1];
			cout<<ans[i]-1<<" ";
		}
		cout<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, k, i, prev, ans=0;
	cin>>n>>k;
	long long arr[n];
	vector < long long > neg;
	for(i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i]<0)
			neg.push_back(i);
	}
	ans = neg.size()*2;
	if(neg.size()>k){
		cout<<-1<<endl;
		return 0;
	}
	k = k - neg.size();
	if(ans==0){
		cout<<ans<<endl;
		return 0;
	}
	vector<long long> no;
	if(neg.size()>1){
		for(i=1; i<neg.size(); i++){
			no.push_back(neg[i]-neg[i-1]-1);
		}
	}
	sort(no.begin(), no.end());
	for(i=0; i<no.size(); i++){
		if(no[i]<=k){
			k=k-no[i];
			ans -=2;
		}
	}
	if((n-neg[neg.size()-1]-1)<=k){
		ans--;
	}
	cout<<ans<<endl;
	return 0;
}
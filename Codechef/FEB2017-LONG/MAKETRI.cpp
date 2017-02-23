#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, l, r, i, j, temp1, temp2, k;
	scanf("%lld %lld %lld", &n, &l, &r);
	long long arr[n];
	vector < pair<long long, long long> > ansArr;
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr, arr+n);
	for(i=0; i<n-1; i++){
		temp1 = arr[i]+arr[i+1]-1;
		temp2 = abs(arr[i]-arr[i+1])+1;
		temp2 = max(temp2, l);
		temp1 = min(temp1, r);
		if(temp1>=temp2){
			ansArr.push_back(make_pair(temp2, temp1));
		}
	}
	sort(ansArr.begin(), ansArr.end());
	long long ans=0, maxy=0;
	if(ansArr.size()>0){ 
		ans += (ansArr[0].second-ansArr[0].first+1);
		maxy = ansArr[0].second;
		for(i=1; i<ansArr.size(); i++){
			if(ansArr[i].first<=maxy){
				if(ansArr[i].second>maxy){
					ans += (ansArr[i].second-maxy);
					maxy = ansArr[i].second;
				}
			}
			else{
				ans += (ansArr[i].second-ansArr[i].first+1);
				maxy = ansArr[i].second;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
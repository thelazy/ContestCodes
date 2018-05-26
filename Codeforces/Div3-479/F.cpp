#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, i;
	cin>>n;
	vector<long long> arr(n);
	vector<pair<long long, long long> > last_pos(n, make_pair(-1, 1));
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	unordered_map<long long, long long> mp;
	for(i=0; i<n; i++){
		if(mp.find(arr[i]-1)!=mp.end()){
			mp[arr[i]] = i;
			last_pos[i] = make_pair(mp[arr[i]-1], last_pos[mp[arr[i]-1]].second+1);
		}
		else{
			mp[arr[i]] = i;
		}
	}
	long long maxi = -1, max_ind;
	for(i=0; i<n; i++){
		if(last_pos[i].second>maxi){
			maxi = last_pos[i].second;
			max_ind = i;
		}
	}
	long long tt;
	cout<<maxi<<endl; 
	vector<long long> ans;
	do{
		ans.push_back(max_ind+1);
		tt = last_pos[max_ind].first;
		max_ind = tt;
	}while(max_ind!=-1);
	for(i=maxi-1; i>=0; i--){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
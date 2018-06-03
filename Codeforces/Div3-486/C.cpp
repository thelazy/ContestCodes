#include <bits/stdc++.h>
using namespace std;

int main(){
	long long k, n, sum, temp;
	vector<long long> v;
	cin>>k;
	map<long long, pair<long long, long long> > mp;
	bool done = false;
	for(long long int i=1; i<=k; i++){
		cin>>n;
		sum = 0;
		v.clear();
		for(long long j=0; j<n; j++){
			cin>>temp;
			v.push_back(temp);
			sum += temp;
		}
		for(long long j=0; j<n; j++){
			if(mp.find((sum-v[j]))==mp.end()){
				//cout<<(sum-v[j])<<" : "<<i<<", "<<(j+1)<<endl;
				mp[(sum-v[j])] = make_pair(i, j+1);
			}
			else if(mp[(sum-v[j])].first!=i){
				cout<<"YES\n";
				//cout<<(sum-v[j])<<" : "<<i<<", "<<(j+1)<<endl;
				cout<<mp[sum-v[j]].first<<" "<<mp[sum-v[j]].second<<endl;
				cout<<i<<" "<<j+1<<endl;
				done = true;
				break;
			}
		}
		if(done)
			break;
	}
	if(!done){
		cout<<"NO\n";
	}
	return 0;
}
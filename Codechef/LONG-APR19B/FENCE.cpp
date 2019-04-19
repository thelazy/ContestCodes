#include <bits/stdc++.h>

using namespace std;

int main(){

	long long t, n, m, k, r, c, ans;
	cin>>t;
	while(t--){
		cin>>n>>m>>k;
		bool isPlant[n][m];
		set<pair<long long, long long> > plantCheck;
		vector<pair<long long, long long> > v;
		pair<long long, long long> p1;
		ans = 0;
		for(int i=0; i<k; i++){
			cin>>p1.first;
			cin>>p1.second;
			v.push_back(p1);
			plantCheck.insert(p1);
		}
		for(int i=0; i<k; i++){
			r = v[i].first;
			c = v[i].second;
			if(r==1 || r==n){
				ans++;
			}
			if(c==1 || c==m){
				ans++;
			}
			if(r!=1 && (plantCheck.find(make_pair(r-1, c))==plantCheck.end())){
				ans++;
			}
			if(r!=n && (plantCheck.find(make_pair(r+1, c))==plantCheck.end())){
				ans++;
			}
			if(c!=1 && (plantCheck.find(make_pair(r, c-1))==plantCheck.end())){
				ans++;
			}
			if(c!=m && (plantCheck.find(make_pair(r, c+1))==plantCheck.end())){
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
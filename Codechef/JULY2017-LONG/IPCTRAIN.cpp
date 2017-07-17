#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int t, n, d, t1, t2, t3;
	cin>>t;
	while(t--){
		cin>>n>>d;
		long long int sad[n];
		long long int lec[n];
		vector<long long int> v[d];
		for(long long int i=0; i<n; i++){
			cin>>t1>>t2>>t3;
			lec[i]=t2;
			sad[i]=t3;
			v[t1-1].push_back(i);
		}
		priority_queue<pair<long long int, long long int> > pq;
		pair<long long int, long long int> p;
		for(long long int i=0; i<d; i++){
			for(long long int j=0; j<v[i].size(); j++){
				pq.push(make_pair(sad[v[i][j]], v[i][j]));
			}
			if(!pq.empty()){
				p = pq.top();
				lec[p.second]--;
				if(lec[p.second]==0)
					pq.pop();
			}
		}
		long long int ans=0;
		for(long long int i=0; i<n; i++)
			ans += (lec[i]*sad[i]);
		cout<<ans<<endl;
	}
	return 0;
}
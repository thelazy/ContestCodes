#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;

long long modu(long long num){
	return (((num%mod)+mod)%mod);
}

int main(){
	long long t, n, m, a, b, c;
	cin>>t;
	while(t--){
		cin>>n>>m;
		vector<long long> toP(n+2, 0);
		vector<long long> ins(m+2, 1);
		ins[m+1]=-1;
		vector<long long> temp(m+2, 0);
		vector<pair<long long, pair<long long, long long> > >in;
		in.push_back(make_pair(0, make_pair(0, 0)));
		for(int i=0; i<m; i++){
			cin>>a>>b>>c;
			in.push_back(make_pair(a, make_pair(b, c)));
		}
		for(int i=m; i>=1; i--){
			ins[i] += temp[i];
			ins[i] = modu(ins[i]);
			temp[i-1] += temp[i];
			temp[i-1] = modu(temp[i-1]);
			if(in[i].first==1){
				toP[in[i].second.first] += ins[i];
				toP[in[i].second.first] = modu(toP[in[i].second.first]);
				toP[in[i].second.second+1] -= ins[i];
				toP[in[i].second.second+1] = modu(toP[in[i].second.second+1]);
			}
			else{
				temp[in[i].second.second] += ins[i];
				temp[in[i].second.second] = modu(temp[in[i].second.second]);
				temp[in[i].second.first-1] -= ins[i];
				temp[in[i].second.first-1] = modu(temp[in[i].second.first-1]);
			}
		}
		for(int i=1; i<=n; i++){
			toP[i] += toP[i-1];
			toP[i] = modu(toP[i]);
		}
		for(int i=1; i<=n; i++){
			cout<<toP[i]<<" ";
		}
		cout<<endl;

	}
	return 0;
}
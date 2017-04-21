#include <bits/stdc++.h>
using namespace std;

vector<int> v[10001];

int main(){
	long long n, g, d, maxd=-1, ans=0;
	priority_queue < int > pq;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>g>>d;
		if(d>maxd)
			maxd=d;
		v[d].push_back(g);
	}
	for(int i=maxd; i>=1; i--){
		for(int j=0; j<v[i].size(); j++){
			pq.push(v[i][j]);
		}
		if(!pq.empty()){
			ans += pq.top();
			pq.pop();
		}
	}
	cout<<ans<<endl;
	return 0;
}
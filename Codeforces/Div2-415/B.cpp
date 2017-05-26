#include <bits/stdc++.h>
using namespace std;

pair <long long, pair<long long, long long> > p;

int main(){
	long long n, f, l, k, temp, ans=0;
	cin>>n>>f;
	priority_queue< pair<long long, pair<long long, long long> > >pq;
	for(int i=0; i<n; i++){
		cin>>l>>k;
		temp = (min(2*l, k)-min(l, k));
		pq.push(make_pair(temp,make_pair(l, k)));
	}
	int i=0;
	for(i; i<f; i++){
		p = pq.top();
		pq.pop();
		ans += min(p.second.first*2, p.second.second);

	}
	for(i; i<n; i++){
		p = pq.top();
		pq.pop();
		ans += min(p.second.first, p.second.second);

	}
	cout<<ans<<endl;
	return 0;
}
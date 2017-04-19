#include <bits/stdc++.h>
using namespace std;

pair <long long, long long> p1;

int main(){
	long long t, n, ans, a, b, prev;
	cin>>t;
	while(t--){
		cin>>n;
		priority_queue < pair<long long, long long> > p;
		for(int i=0; i<n; i++){
			cin>>a>>b;
			p.push(make_pair(-b, a));
		}
		ans = 0;
		if(!p.empty()){
			p1 = p.top();
			p.pop();
			ans++;
			prev = -p1.first;
		}
		while(!p.empty()){
			p1 = p.top();
			p.pop();
			if(p1.second>=prev){
				ans++;
				prev = -p1.first;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
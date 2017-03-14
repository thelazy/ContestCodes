#include <bits/stdc++.h>

using namespace std;

int main(){
	long long t, n, a, b, i, l, p, ans;
	cin>>t;
	while(t--){
		priority_queue<long long> q;
		cin>>n;
		vector < pair<long long, long long> > v;
		for(i=0; i<n; i++){
			cin>>a>>b;
			v.push_back(make_pair(a, b));
		}
		v.push_back(make_pair(0,0));
		cin>>l>>p;
		sort(v.begin(), v.end());
		ans=0;
		int flag=1;
		for(i=v.size()-1; i>=0; i--){
			//cout<<v[i].first<<" "<<v[i].second<<endl;
			if(v[i].first<=l){
				 if((l-p)<=v[i].first){
				 	//cout<<"Pushing : "<<v[i].second<<endl;
				 	q.push(v[i].second);
				 }
				 else{
				 	while((l-p)>v[i].first){
				 		if(!q.empty()){
				 			p += q.top();
				 			//cout<<"Adding : "<<q.top()<<endl;
				 			q.pop();
				 			ans++;
				 		}
				 		else{
				 			flag=0;
							break;
				 		}
				 	}
				 	if(!flag)
				 		break;
				 	q.push(v[i].second);
				 	//cout<<"Pushing : "<<v[i].second<<endl;
				 }
			}
		}
		if((l-p)<=0){
			cout<<ans<<endl;
		}
		else
			cout<<-1<<endl;
	}
	return 0;
}
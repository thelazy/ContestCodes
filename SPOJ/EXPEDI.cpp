/*
Input:
1
4
4 4
5 2
11 5
15 10
25 10

Output:
2
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	long long int t, N, Distance, FuelAmount, iniPos, iniFuel, ans;
	cin>>t;
	while(t--){
		priority_queue<long long> q;
		cin>>N;
		vector < pair<long long, long long> > FuelStops;
		for(ll i=0; i<N; i++){
			cin>>Distance>>FuelAmount;
			FuelStops.push_back(make_pair(Distance, FuelAmount));
		}
		FuelStops.push_back(make_pair(0,0));
		cin>>iniPos>>iniFuel;
		sort(FuelStops.begin(), FuelStops.end());
		ans=0;
		int flag=1;
		for(ll i=FuelStops.size()-1; i>=0; i--){
			 if(FuelStops[i].first >= (iniPos-iniFuel)){
			 	q.push(FuelStops[i].second);
			 }
			 else{
			 	while((iniPos-iniFuel)>FuelStops[i].first){
					if(!q.empty()){
			 			iniFuel += q.top();
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
				q.push(FuelStops[i].second);
			}
		}
		if((iniPos-iniFuel)<=0){
			cout<<ans<<endl;
		}
		else
			cout<<-1<<endl;
	}
	return 0;
}
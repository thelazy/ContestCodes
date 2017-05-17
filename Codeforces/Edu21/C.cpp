#include <bits/stdc++.h>

using namespace std;

pair < int, int> p1;

int main(){
	int n, w, temp, temp1, i;
	cin>>n>>w;
	int ans[n];
	priority_queue < pair<int, int> > pq;
	for(i=0; i<n; i++){
		cin>>temp;
		pq.push(make_pair(temp, i));
		temp1 = ceil((float)temp/2);
		ans[i] = temp1;
		w -= temp1;
		if(w<0){
			cout<<-1<<endl;
			return 0;
		}
	}
	i=0;
	for(i; i<n; i++){
		p1 = pq.top();
		pq.pop();
		//cout<<(p1.first-ans[p1.second])<<" "<<w<<endl;
		if((p1.first-ans[p1.second])<=w){
			w -= (p1.first-ans[p1.second]);
			ans[p1.second] = p1.first;
		}
		else{
			ans[p1.second] += w;
			break;
		}
	}
	int sum=0;
	for(i=0; i<n; i++){
		cout<<ans[i]<<" ";
		sum+= ans[i];
	}
	cout<<endl;
	return 0;
}
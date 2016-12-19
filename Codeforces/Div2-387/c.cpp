#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, q, i, t, k, d, sum=0;
	cin>>n>>q;
	long long ser[n+1];
	for(i=1; i<=n; i++)
		ser[i]=0;
	while(q--){
		cin>>t>>k>>d;
		vector<long long>se;
		for(i=1; i<=n; i++){
			if(t>ser[i]){
				se.push_back(i);
			}
			if(se.size()==k)
				break;
		}
		if(se.size()==k){
			sum=0;
			for(i=0; i<se.size(); i++){
				sum += se[i];
				ser[se[i]]=t+d-1;
			}
			cout<<sum<<endl;
		}
		else
			cout<<-1<<endl;
	}
	return 0;
}
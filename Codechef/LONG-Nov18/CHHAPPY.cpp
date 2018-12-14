#include <bits/stdc++.h>

using namespace std;

int main(){
	long long t, n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> arr(n+1);
		map<int, vector<int> > mp;
		for(int i=1; i<=n; i++){
			cin>>arr[i];
			mp[arr[i]].push_back(i);
		}
		bool done = false;
		for(int i=1; i<=n; i++){
			if(mp[i].size()>=2){
				int cnt=0;
				for(int j=0; j<mp[i].size(); j++){
					if(mp[mp[i][j]].size()>0){
						cnt++;
					}
					if(cnt==2){
						cout<<"Truly Happy\n";
						done = true;
						break;
					}
				}
			}
			if(done)
				break;
		}
		if(!done)
			cout<<"Poor Chef\n";
	}
	return 0;
}

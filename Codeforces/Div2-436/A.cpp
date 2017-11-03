#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, temp, cnt=0;
	vector<int> unq;
	unordered_map<int, int> mp;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>temp;
		if(mp[temp]==0){
			cnt++;
			unq.push_back(temp);
			mp[temp]=1;
		}
		else
			mp[temp]++;
	}
	if(cnt==2){
		if(mp[unq[0]]==mp[unq[1]]){
			printf("YES\n");
			cout<<unq[0]<<" "<<unq[1]<<endl;
		}
		else{
			printf("NO\n");
		}
	}
	else{
		printf("NO\n");
	}
	return 0;
}
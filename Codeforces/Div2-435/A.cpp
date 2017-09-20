#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x, temp;
	cin>>n>>x;
	vector<bool> chk(101, false);
	for(int i=0; i<n; i++){
		cin>>temp;
		chk[temp] = true;
	}
	int ans=0;
	for(int i=0; i<x; i++){
		if(!chk[i])
			ans++;
	}
	if(chk[x])
		ans++;
	cout<<ans<<endl;
	return 0;
}
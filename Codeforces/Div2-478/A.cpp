#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, ind=0, ans=0;
	string s, temp;
	cin>>n;
	unordered_map<string, bool> mp;
	for(int i=0; i<n; i++){
		cin>>s;
		sort(s.begin(), s.end());
		temp = "";
		temp += s[0];
		ind = 0;
		for(int j=0; j<s.length(); j++){
			if(temp[ind]!=s[j]){
				temp+=s[j];
				ind++;
			}
		}
		if(mp.find(temp)==mp.end()){
			ans++;
			mp[temp] = true;
		}
		//cout<<s<<" : "<<temp<<endl;
	}
	cout<<ans<<endl;
	return 0;
}
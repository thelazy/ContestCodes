#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	string s;
	cin>>t;
	while(t--){
		unordered_map <string, int> mp;
		for(int i=0; i<4; i++){
			cin>>s;
			mp[s]++;
		}
		int temp=0;
		for(int i=0; i<4; i++){
			cin>>s;
			temp += mp[s];
		}
		if(temp>=2)
			cout<<"similar\n";
		else
			cout<<"dissimilar\n";
	}
	return 0;
}
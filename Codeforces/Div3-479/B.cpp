#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<vector<int> > v(26, vector<int>(26, 0));
	int n, ans=0;
	char aa, bb;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0; i<s.length()-1; i++){
		v[s[i]-'A'][s[i+1]-'A']++;
		if(v[s[i]-'A'][s[i+1]-'A']>ans){
			ans = v[s[i]-'A'][s[i+1]-'A'];
			aa = s[i];
			bb = s[i+1];
		}
	}
	cout<<aa<<bb<<endl;
	return 0;
}
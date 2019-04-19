#include <bits/stdc++.h>
using namespace std;


int main(){
	long long t, af, d;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cin>>d;
		vector<pair<char, int> > v;
		for(int i=0; i<s.length(); i++){
			v.push_back(make_pair(s[i], i));
		}
		sort(v.begin(), v.end());
		string ans="";
		if((v[0].first-'0') < d){
			ans += v[0].first;
			af = v[0].second;
			for(int i=1; i<v.size(); i++){
				if((v[i].first-'0')>d)
					break;
				if(v[i].second > af){
					ans += v[i].first;
					af = v[i].second;
				}
			}
		}
		cout<<ans;
		for(int i=0; i<(s.length()-ans.length()); i++)
			cout<<d;
		cout<<endl;
	}
	return 0;
}
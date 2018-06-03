#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
	return (a.length()<b.length());
}

int main(){
	int n;
	cin>>n;
	string s;
	vector<string> v;
	while(n--){
		cin>>s;
		v.push_back(s);
	}
	sort(v.begin(), v.end(), cmp);
	bool ok = true;
	for(int i=1; i<v.size(); i++){
		if(v[i].find(v[i-1])==string::npos){
			ok = false;
			break;
		}
	}
	if(ok){
		cout<<"YES\n";
		for(int i=0; i<v.size(); i++){
			cout<<v[i]<<endl;
		}
	}
	else{
		cout<<"NO\n";
	}
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long t, s, f, i, j, ans;
	string temp;
	cin>>t;
	for(i=1; i<=t; i++){
		cin>>s;
		ans = 0;
		set <string> all;
		getline(cin, temp);
		for(j=0; j<s; j++){
			getline(cin, temp);
			all.insert(temp);
		}
		set <string> fake;
		cin>>f;
		getline(cin, temp);
		for(j=0; j<f; j++){
			getline(cin, temp);
			fake.insert(temp);
			if(fake.size()==all.size()){
				ans++; 
				fake.clear();
				fake.insert(temp);
			}
		}
		cout<<"Case #"<<i<<": "<<ans<<endl;
		all.clear(); fake.clear();
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

pair<bool, pair<bool, pair<bool, pair<bool, bool> > > > p1, p2;

vector<bool> convertPairToList(pair<bool, pair<bool, pair<bool, pair<bool, bool> > > > arg_pair){
	vector<bool> ret;
	ret.push_back(arg_pair.first);
	ret.push_back(arg_pair.second.first);
	ret.push_back(arg_pair.second.second.first);
	ret.push_back(arg_pair.second.second.second.first);
	ret.push_back(arg_pair.second.second.second.second);
	return ret;
}

void pp(vector<bool> arg_l){
	for(int i=0; i<arg_l.size(); i++){
		if(arg_l[i])
			cout<<1<<" ";
		else
			cout<<0<<" ";
	}
	cout<<endl;
}

bool gd(vector<bool> v1, vector<bool> v2){
	bool temp = true;
	for(int i=0; i<5; i++){
		temp &= (v1[i]||v2[i]);
	}
	return temp;
}


int main(){
	long long t, n, ans;
	string s;
	bool arr[6];

	map <char, int> mp;
	mp['a']=1;
	mp['e']=2;
	mp['i']=3;
	mp['o']=4;
	mp['u']=5;

	cin>>t;
	while(t--){
		ans = 0;
		cin>>n;
		map <pair<bool, pair<bool, pair<bool, pair<bool, bool> > > >, long long > real_mp;
		for(int i=0; i<n; i++){

			cin>>s;

			for(int j=0; j<6; j++){
				arr[j] = false;
			}

			for(int j=0; j<s.length(); j++){
				arr[mp[s[j]]] = true;
			}

			p1.first = arr[1];
			p1.second.first = arr[2];
			p1.second.second.first = arr[3];
			p1.second.second.second.first = arr[4];
			p1.second.second.second.second = arr[5];

			real_mp[p1]++;

		}

		vector<pair<bool, pair<bool, pair<bool, pair<bool, bool> > > > > Key_v;

		for (auto const& element : real_mp) {
    		Key_v.push_back(element.first);
  		}
  		
  		for(int i=0; i<Key_v.size(); i++){
  			for(int j=i+1; j<Key_v.size(); j++){
  				if(gd(convertPairToList(Key_v[i]), convertPairToList(Key_v[j]) ) ){
  					//pp(convertPairToList(Key_v[i]));
  					//pp(convertPairToList(Key_v[j]));
  					ans += (real_mp[Key_v[i]]*real_mp[Key_v[j]]);
  				}
  			}
  		}
  		p1.first = true;
		p1.second.first = true;
		p1.second.second.first = true;
		p1.second.second.second.first = true;
		p1.second.second.second.second = true;

		ans += ((real_mp[p1]*(real_mp[p1]-1))/2);

  		cout<<ans<<endl;
		real_mp.clear();
		Key_v.clear();
	}
	return 0;
}
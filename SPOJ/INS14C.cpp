#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t, n, k, i;
	string s;
	cin>>t;
	deque <int> s1;
	deque <int> s0;
	while(t--){
		cin>>n>>k;
		cin>>s;
		bool chk[n];
		s1.clear();s0.clear();
		for(i=0; i<n; i++){
			chk[i]=1;
			if(s[i]=='1')
				s1.push_back(i);
			else
				s0.push_back(i);
		}
		for(i=0; i<n-k; i++){
			if(i%2==0){
				if(!s1.empty()){
					chk[s1.front()]=0;
					s1.pop_front();
				}
				else{
					chk[s0.back()]=0;
					s0.pop_back();
				}
			}
			else{
				if(!s0.empty()){
					chk[s0.front()]=0;
					s0.pop_front();
				}
				else{
					chk[s1.back()]=0;
					s1.pop_back();
				}
			}
		}
		for(i=0; i<n; i++){
			if(chk[i]==1)
				cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}
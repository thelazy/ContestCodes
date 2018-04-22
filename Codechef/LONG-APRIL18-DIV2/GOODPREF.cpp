#include <bits/stdc++.h>
using namespace std;
 
void fun(long long a, long long b, long long n, long long &ans){
	if(b>0 && (a*n+b)>0){
		ans += (n+1);
		return;
	}
	if(b<=0 && (a*n+b)<=0){
		return;
	}
	long long root = (-b/a);
	if((a*(root+1)+b)>0){
		ans += (n-root);
		return;
	}
	if((a*root+b)>0){
		ans += (root+1);
		return;
	}
	ans += (root);
	return;
}
 
int main(){
	long long t, n, ans;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		cin>>n;
		vector<long long> ac(s.length());
		vector<long long> bc(s.length());
		if(s[0]=='a'){
			ac[0] = 1;
			bc[0] = 0;
		}
		else{
			ac[0] = 0;
			bc[0] = 1;
		}
		for(int i=1; i<s.length(); i++){
			ac[i] = ac[i-1];
			bc[i] = bc[i-1];
			if(s[i]=='a')
				ac[i]++;
			else
				bc[i]++;
		}
		ans = 0;
		for(int i=0; i<s.length(); i++){
			fun((ac[s.length()-1]-bc[s.length()-1]), (ac[i]-bc[i]), n-1, ans);
		}
		cout<<ans<<endl;
	}
	return 0;
} 
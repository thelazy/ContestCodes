#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	long long ans=0, mod = 1e9+7, cnt=0, prev=0, tot;
	for(int i=s.length()-1; i>=0; i--){
		if(s[i]=='b'){
			cnt++;
		}
		else{
			tot = ((cnt + prev)%mod);
			ans += tot;
			ans = (ans%mod);
			prev = ((tot*2)%mod);
			prev = (prev%mod);
			cnt = 0;
		}
	}
	cout<<ans<<endl;
	return 0;
}
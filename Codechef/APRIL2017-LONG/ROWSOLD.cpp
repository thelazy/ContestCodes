#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t, i, gap, pos, ans;
	char prev;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		prev = '1';
		gap = 0;
		ans = 0;
		pos = s.length()-1;
		for(i=s.length()-1; i>=0; i--){
			if(s[i]=='1'){
				ans += (pos-i);
				if((pos-i)>0)
					ans += gap;
				pos--;
			}
			else{
				if(prev!='0')
					gap++;
			}
			prev = s[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}
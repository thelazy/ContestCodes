#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	long long i=1, tt=0, j, ans;
	while(1){
		cin>>s;
		if(s[0]=='-')
			break;
		tt=0;
		ans=0;
		for(j=0; j<s.length(); j++){
			if(s[j]=='{')
				tt++;
			else
				tt--;
			if(tt==-1){
				ans++; tt+=2;
			}
		}
		ans += (tt+1)/2;
		cout<<i++<<". "<<ans<<endl;
	}
	return 0;
}
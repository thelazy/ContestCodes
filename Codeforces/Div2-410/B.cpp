#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, ans=INT_MAX, len, cnt;
	cin>>n;
	string s[n], temp;
	for(int i=0; i<n; i++)
		cin>>s[i];
	if(n==1){
		cout<<0<<endl;
		return 0;
	}
	len = s[0].length();
	for(int i=0; i<n; i++){
		cnt = 0;
		for(int j=0; j<n; j++){
			if(j!=i){
				int ii=0;
				for(ii; ii<len; ii++){
					temp = s[j].substr(ii, len-ii)+s[j].substr(0, ii);
					//cout<<s[j]<<" "<<temp<<endl;
					if(temp==s[i]){
						cnt += ii;
						break;
					}
				}
				if(ii==len){
					cout<<-1<<endl;
					return 0;
				}
			}
		}
		ans = min(ans, cnt);
		if(ans==0){
			cout<<0<<endl;
			return 0;
		}
	}
	cout<<ans<<endl;
    return 0;
}
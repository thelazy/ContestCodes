#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int cnt=0;
	int t;
	cin>>t;
	bool g = false;
	while(t--){
		cin>>s;
		cnt=0;
		for(int i=0; i<s.length(); i++){
			if((s[i]=='f'||s[i]=='r'||s[i]=='i'||s[i]=='e'||s[i]=='z'||s[i]=='a')){
				if(g){
					cnt++;
				}
				else{
					if(cnt>0)
						cout<<cnt;
					g = true;
					cnt=1;
				}
			}
			else{
				if(!g){
					cnt++;
				}
				else{
					if(cnt>0){
						cout<<cnt;
					}
					g = false;
					cnt = 1;
				}
			}
		}
		cout<<cnt;
		cout<<endl;
	}
	return 0;
}
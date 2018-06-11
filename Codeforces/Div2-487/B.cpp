#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, p;
	cin>>n>>p;
	string s;
	cin>>s;
	for(int i=0; i<n; i++){
		if((i+p)>=n)
			break;
		if((s[i]!=s[i+p])||(s[i]=='.')){
			if(s[i]=='.'&&s[i+p]=='.'){
				s[i]='0';
				s[i+p] ='1';
			}
			if(s[i]=='1'){
				s[i+p] = '0';
			}
			if(s[i]=='0'){
				s[i+p] = '1';
			}
			if(s[i+p]=='1'){
				s[i] = '0';
			}
			if(s[i+p]=='0'){
				s[i] = '1';
			}
			for(int j=0; j<n; j++){
				if(s[j]=='.')
					s[j] = '0';
			}
			cout<<s<<endl;
			return 0;
		}
	}
	cout<<"No\n";
	return 0;
}
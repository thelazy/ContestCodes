#include <bits/stdc++.h>
using namespace std;

void pno(){
	cout<<"NO\n";
}

void pyes(){
	cout<<"YES\n";
}
int main(){
	string s;
	cin>>s;
	if(s.length()<3){
		pno();
		return 0;
	}
	for(int i=0; i<=s.length()-3; i++){
		if((s[i]=='A'||s[i+1]=='A'||s[i+2]=='A')&&(s[i]=='B'||s[i+1]=='B'||s[i+2]=='B')&&(s[i]=='C'||s[i+1]=='C'||s[i+2]=='C')){
			pyes();
			return 0;
		}
	}
	pno();
	return 0;
}
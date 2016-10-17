#include <bits/stdc++.h>

using namespace std;

int main(){
	long long t, len;
	string s;
	cin>>t;
	for(long long i=1; i<=t; i++){
		cout<<"Case #"<<i<<": ";
		cin>>s;len = s.length();
		if(s[len-1]=='a'||s[len-1]=='e'||s[len-1]=='i'||s[len-1]=='o'||s[len-1]=='u'||s[len-1]=='A'||s[len-1]=='E'||s[len-1]=='I'||s[len-1]=='O'||s[len-1]=='U')
			cout<<s<<" is ruled by a queen.\n";
		else
			if(s[len-1]=='y'||s[len-1]=='Y')
				cout<<s<<" is ruled by nobody.\n";
			else
				cout<<s<<" is ruled by a king.\n";
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){   
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cnt=0;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='0'){
			cout<<cnt;
			cnt=0;
		}
		else
			cnt++;
	}
	cout<<cnt<<endl;
    return 0;
}

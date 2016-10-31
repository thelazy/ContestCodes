#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int prevPos = -1, max=0;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'){
			if((i-prevPos)>max)
				max = i-prevPos;
			prevPos = i;
		}
	}
	if((s.length()-prevPos)>max)
		max = s.length()-prevPos;
	cout<<max<<endl;

	return 0;
}
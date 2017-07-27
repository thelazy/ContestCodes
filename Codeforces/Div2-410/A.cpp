#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int cnt=0, len = s.length();
	for(int i=0; i<(len/2); i++){
		if(s[i]!=s[len-i-1])
			cnt++;
	}
	if(cnt==1){
		cout<<"YES\n";
	}
	else{
		if(cnt==0){
			if(len%2==1)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
			printf("NO\n");
	}
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int cnt1 = 0, cnt2 = 0;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='-')
			cnt1++;
		else
			cnt2++;
	}
	//cout<<cnt1<<" "<<cnt2<<endl;
	if(cnt2 == 0){
		cout<<"YES\n";
		return 0;
	}
	if((cnt1%cnt2) == 0){
		printf("YES\n");
	}
	else
		printf("NO\n");
	return 0;
}
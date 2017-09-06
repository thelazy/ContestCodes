#include <bits/stdc++.h>
using namespace std;


long long fun(long long a, long long b){
	if(b>0){
		if(b%2==1){
			return ((a*fun(((a*a)%10), (b/2)))%10);
		}
		else{
			return (fun(((a*a)%10), (b/2))%10);
		}
	}
	return 1;
}


int main(){
	long long t, b, d;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		cin>>b;
		d = s[s.length()-1]-'0';
		if(b==0){
			cout<<1<<endl;
		}
		else if(d<=1||d==5||d==6){
			cout<<d<<endl;
		}
		else{
			cout<<fun(d, b)<<endl;
		}
	}
}
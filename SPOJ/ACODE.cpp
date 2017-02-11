#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	string s;
	while(1){
		int flag=1;
		cin>>s;
		if(s.length()==1){
			if((int)s[0]==48)
				break;
			cout<<1<<endl;
			continue;
		}
		int a = (int)s[0]-48, b;
		long long ans1=1, ans2=1, temp;
		if(a==0){
			flag=0;
		}
		else{
		for(long long i=1; i<s.length(); i++){
			b = (int)s[i]-48;
			temp=0;
			if(b!=0){
				temp += ans2;
				if(a!=0){
					if((a*10+b)<=26)
						temp+=ans1;
				}
			}
			else if(b==0){
				if(a==1||a==2)
					temp += ans1;
				else{
					flag=0;
					break;
				}
			}
			ans1 = ans2;
			ans2 = temp;
			a = b;
		}
		}
		if(flag)
			cout<<ans2<<endl;
		else
			cout<<0<<endl;
	}
	return 0;
}
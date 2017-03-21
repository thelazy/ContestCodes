#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t, a, b, c, flag, flag1;
	cin>>t;
	char s[1000];
	while(t--){
		flag1=-1;
		for(int i=0; i<5; i++){
			cin>>s;
			flag = 1;
			if(i==0){
				for(int j=0; s[j]!='\0'; j++){
					if(!(s[j]<='9'&&s[j]>='0')){
						flag=0;flag1=0;break;
					}
				}
				if(flag)
					a = atoi(s);
			}
			else if(i==2){
				for(int j=0; s[j]!='\0'; j++){
					if(!(s[j]<='9'&&s[j]>='0')){
						flag=0;flag1=2;break;
					}
				}
				if(flag)
					b = atoi(s);

			}
			else if(i==4){
				for(int j=0; s[j]!='\0'; j++){
					if(!(s[j]<='9'&&s[j]>='0')){
						flag=0;flag1=4;break;
					}
				}
				if(flag)
					c = atoi(s);
			}
		}
		if(flag1==0){
			a = c-b;
		}
		else if(flag1==2){
			b = c-a;
		}
		else if(flag1==4){
			c = a+b;
		}
		cout<<a<<" + "<<b<<" = "<<c<<endl;
	}
	return 0;
}
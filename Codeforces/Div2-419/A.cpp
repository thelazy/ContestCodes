#include <bits/stdc++.h>
using namespace std;

int inv11(int a){
	int b=0;
	b = (a%10)*10 + (a/10);
	return b;
}

int main(){
	string s;
	cin>>s;
	int ans = 0, temp;
	int h = ((s[0]-'0')*10 + (s[1]-'0'));
	int m = ((s[3]-'0')*10 + (s[4]-'0'));
	while(1){
		temp = inv11(h);
		if(temp<60 && (temp-m)>=0){
			cout<<(temp-m+ans)<<endl;
			break;
		}
		else{
			h++;
			h = h%24;
			ans += (60-m);
			m = 0;
		}
	}
	return 0;
}
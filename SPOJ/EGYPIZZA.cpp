#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, c3=0, c2=0, c1=0, ans;
	string s;
	cin>>n;
	while(n--){
		cin>>s;
		if(s=="1/2")
			c2++;
		else if(s=="1/4")
			c1++;
		else
			c3++;
	}
	ans = c3;
	c1 -= c3;
	if(c1<=0)
		ans += (c2+1)/2;
	else{
		if(c2%2==0){
			ans += (c2/2);
			ans += ((c1+3)/4);
		}
		else{
			ans += ((c2+1)/2);
			c1 -= 2;
			ans += ((c1+3)/4);
		}
	}
	cout<<ans+1<<endl;
	return 0;
}
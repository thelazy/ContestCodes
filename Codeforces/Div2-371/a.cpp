#include <bits/stdc++.h>

using namespace std;

int main(){
	long long l1, r1, l2, r2, k, ans=0;
	cin>>l1>>r1>>l2>>r2>>k;
	l1 = max(l1, l2);
	r1 = min(r1, r2);
	ans = r1-l1+1;
	if(ans<=0)
		cout<<0<<endl;
	else{
		if(k<=r1 && k>=l1)
			cout<<ans-1<<endl;
		else
			cout<<ans<<endl;
	}
	return 0;
}
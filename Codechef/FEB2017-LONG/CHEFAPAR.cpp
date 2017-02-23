#include <bits/stdc++.h>

using namespace std;

int main(){
	long long t, n, fz, i, cnt1, temp, ans;
	cin>>t;
	while(t--){
		cin>>n;
		fz=-1;cnt1=0;
		for(i=0; i<n; i++){
			cin>>temp;
			if(temp==1)
				cnt1++;
			else if(fz==-1)
				fz=i;
		}
		ans = (n-cnt1)*1000;
		if(fz!=-1)
			ans += (n-fz)*100;
		cout<<ans<<endl;
	}
	return 0;
}
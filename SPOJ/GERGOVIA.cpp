#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, temp, ans, i, prev;
	while(1){
		cin>>n;
		if(n==0)
			break;
		ans=0;
		prev=0;
		for(i=0; i<n; i++){
			cin>>temp;
			ans += abs(prev);
			prev += temp;
		}
		cout<<ans<<endl;
	}
	return 0;
}
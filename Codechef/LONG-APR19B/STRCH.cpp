#include <bits/stdc++.h>

using namespace std;

int main(){

	long long t, n, ans, lastPos, temp;
	cin>>t;
	string a, c;
	char b;
	while(t--){
		cin>>n;
		cin>>a>>b;
		c = b+a+b;
		ans = ((n*(n+1))/2);
		lastPos = 0;
		for(int i=1; i<=(n+1); i++){
			if(c[i]==b){
				temp = i - lastPos -1;
				ans -= ((temp*(temp+1))/2);
				lastPos = i;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	double pi = 3.14159, l, ans;
	double n;
	while(true){
		cin>>n;
		if(n==0)
			break;
		l = (double)(n);
		ans = ((l*l)/(2*pi));
		cout<<fixed<<setprecision(2)<<ans<<endl;
	}
	return 0;
}
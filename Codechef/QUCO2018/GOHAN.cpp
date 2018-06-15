#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	double r, l, c, v, s;
	cin>>t;
	while(t--){
		cout<<fixed;
		cout<<setprecision(6);
		cin>>r>>l>>c>>v;
		s = ((-1.0*r)/(2.0*l));
		cout<<((l*c*s*s)+(r*s*c)+1.0)<<endl;
	}
	return 0;
}
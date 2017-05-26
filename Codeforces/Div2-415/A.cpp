#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n; double k;
	cin>>n;
	cin>>k;
	double th = k-0.5;
	double s=0, temp;
	for(int i=0;i<n; i++){
		cin>>temp;
		s += temp;
	}
	if(s>=(th*(double)n)){
		cout<<0<<endl;
		return 0;
	}
	double x = ((s-(th*(double)n))/(th-k));
	cout<<ceil(x)<<endl;
	return 0;
}
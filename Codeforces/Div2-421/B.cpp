#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, div, cnt;
	double a;
	cin>>n>>a;
	double angle = ((((double)(n-2))*(180.0))/((double)(n)));
	if(a>angle){
		cout<<"1 2 3"<<endl;
		return 0;
	}
	div = n-3;
	double angleD = (angle/((double)(div+1)));
	cnt = ((long long)(a/angleD));
	if(cnt==0){
		cout<<1<<" "<<2<<" "<<n<<endl;
		return 0;
	}
	long long p1 = 1-cnt+n;
	long long p2 = n-cnt;
	double p11 = ((double)cnt) * angleD;
	double p22 = ((double)(cnt+1)) * angleD;
	if(abs(p11-a)<abs(p22-a)){
		cout<<"1 2 "<<p1<<endl;
	}
	else{
		cout<<"1 2 "<<p2<<endl;
	}
	return 0;
}
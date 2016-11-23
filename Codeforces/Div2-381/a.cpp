#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, a, b, c, temp;
	cin>>n>>a>>b>>c;
	temp = (4-(n%4))%4;
	switch(temp){
		case 0: cout<<0<<endl;
				break;
		case 1: cout<<min(a, min(b+c, 3*c))<<endl;
				break;
		case 2: cout<<min(b, min(2*a, c*c))<<endl;
				break;
		case 3: cout<<min(c, min(3*a, a+b))<<endl;
				break;
		default:
				break;
	}
	return 0;
}

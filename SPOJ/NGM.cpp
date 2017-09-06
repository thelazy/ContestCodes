#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, d;
	cin>>n;
	d = n%10;
	if(d==0){
		printf("2\n");
	}
	else{
		printf("1\n%lld\n", d);
	}
	return 0;
}
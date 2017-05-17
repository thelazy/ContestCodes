#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, temp, length=0, div, rem;
	cin>>n;
	temp = n;
	while(temp>0){
		length++;
		temp /= 10;
	}

	if(length==1){
		cout<<1<<endl;
		return 0;
	}
	div = pow(10, length-1);
	rem = n%div;
	if(rem==0){
		cout<<div<<endl;
	}
	else{
		cout<<div-rem<<endl;
	}
	return 0;
}
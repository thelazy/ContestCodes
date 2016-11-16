#include <bits/stdc++.h>

using namespace std;

int main(){
	long long k2, k3, k5, k6;
	cin>>k2>>k3>>k5>>k6;
	long long sum=0, temp=min(k2, min(k5, k6));
	sum += temp * 256;
	sum += min(k2-temp, k3)*32;
	cout<<sum<<endl;
	return 0;
}
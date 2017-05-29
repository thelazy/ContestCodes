#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, x1, x2;
	cin>>a>>b;
	x1 = sqrt(a);
	if((x1*x1)<=a)
		x1++;
	long long lo=0, hi=1e9, mid, temp;
	while(lo<=hi){
		mid = (lo+hi)/2;
		temp = mid*(mid+1);
		if(temp>b){
			x2 = mid;
			hi = mid-1;
		}
		else
			lo = mid+1;
	}
	if(x2<x1)
		cout<<"Valera\n";
	else
		cout<<"Vladik\n";
	return 0;
}
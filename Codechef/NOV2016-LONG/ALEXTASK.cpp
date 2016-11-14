#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b){
	long long temp;
	while(b!=0){
		temp = a%b;
		a = b;
		b = temp;
	}
	return a;
}



long long lcm(long long a, long long b){
	long long ret = (a*(b/gcd(a,b)));
	return ret;
}

int main(){
	long long t, n, min, temp;
	cin>>t;
	while(t--){
		cin>>n;
		long long arr[n];
		for(int i=0; i<n; i++)
			cin>>arr[i];
		min = pow(10, 18);
		//cout<<min<<endl;
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				temp = lcm(arr[i], arr[j]);
				if(temp<min)
					min = temp;
			}
		}
		cout<<min<<endl;
	}
	return 0;
}
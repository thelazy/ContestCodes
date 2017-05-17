#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, k, sum=0;
	cin>>n>>k;
	long long arr[n+1];
	arr[0]=0;
	for(int i=1; i<=n; i++){
		cin>>arr[i];
		arr[i] += arr[i-1];
		if(i>=k){
			sum+= (arr[i]-arr[i-k]);
		}
	}
	double ans = ((double)sum)/((double)(n-k+1));
	cout<<setprecision (15)<<ans<<endl;
	return 0;
}
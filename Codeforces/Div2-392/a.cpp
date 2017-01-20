#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, max=0, i, ans=0;
	cin>>n;
	long long arr[n];
	for(i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i]>max)
			max = arr[i];
	}
	for(i=0; i<n; i++){
		ans += (max-arr[i]);
	}
	cout<<ans;
	return 0;
}
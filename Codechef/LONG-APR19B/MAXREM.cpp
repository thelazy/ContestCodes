#include <bits/stdc++.h>

using namespace std;

int main(){

	long long n;

	cin>>n;

	long long arr[n];

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	sort(arr, arr+n);
	int i;
	for(i=n-1; i>0; i--){
		if(arr[i]!=arr[i-1]){
			break;
		}
	}
	if(i>0){
		cout<<arr[i-1]<<endl;
	}	
	else{
		cout<<0<<endl;
	}
	return 0;
}
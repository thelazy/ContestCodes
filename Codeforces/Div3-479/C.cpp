#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, k;
	cin>>n>>k;
	long long arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr, arr+n);
	if(k==n){
		cout<<arr[n-1]<<endl;
	}
	else if(k==0 && arr[0]==1){
		cout<<-1<<endl;
	}
	else if(k==0){
		cout<<1<<endl;
	}
	else if(arr[k-1]==arr[k]){
		cout<<-1<<endl;
	}
	else{
		cout<<arr[k-1]<<endl;
	}
	return 0;
}
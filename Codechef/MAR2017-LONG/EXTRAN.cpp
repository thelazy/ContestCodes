#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t, n, i;
	cin>>t;
	while(t--){
		cin>>n;
		long long arr[n];
		for(i=0; i<n; i++)
			cin>>arr[i];
		sort(arr, arr+n);
		if(arr[0]+1!=arr[1])
			cout<<arr[0]<<endl;
		else if(arr[n-1]!=arr[n-2]+1)
			cout<<arr[n-1]<<endl;
		else{
			for(i=0; i<n-1; i++){
				if(arr[i]==arr[i+1]){
					cout<<arr[i]<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
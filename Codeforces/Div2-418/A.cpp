#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin>>n>>k;
	int arr[n], arr1[k];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	for(int i=0; i<k; i++)
		cin>>arr1[i];
	if(k>1){
		cout<<"Yes\n";
	}
	else{
		for(int i=0; i<n; i++){
			if(arr[i]==0){
				arr[i] = arr1[0];
				break;
			}
		}
		for(int i=1; i<n; i++){
			if(arr[i]<arr[i-1]){
				cout<<"Yes\n";
				return 0;
			}
		}
		cout<<"No\n";
	}
	return 0;
}
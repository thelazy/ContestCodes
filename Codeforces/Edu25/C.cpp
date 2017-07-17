#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, k, ans=0;
	cin>>n>>k;
	long long arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	sort(arr, arr+n);
	for(int i=0; i<n; i++){
		if(k>=(arr[i]+1)/2){
			k = max(k, arr[i]);
		}
		else{
			long long temp = arr[i];
			while(k<((arr[i]+1)/2)){
				ans++;
				arr[i] = (arr[i]+1)/2;
			}
			k = temp;
		}
	}
	cout<<ans<<endl;
	return 0;
}
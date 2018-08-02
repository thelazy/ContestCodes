#include <iostream>

using namespace std;

int main(){
	long long n, m;
	cin>>n>>m;
	long long arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	long long ans = arr[0], temp=arr[0];
	int p = 0;
	for(int i=1; i<n; i++){
		temp += arr[i];
		while(temp>m){
			temp -= arr[p++];
		}
		ans = max(ans, temp);
	}
	cout<<ans<<endl;
	return 0;
}
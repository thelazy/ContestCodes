#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, m, l, r, x, less;
	cin>>n>>m;
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	while(m--){
		cin>>l>>r>>x;
		l--;r--;x--;
		less=0;
		for(int i=l; i<=r; i++){
			if(i==x)
				continue;
			if(arr[i]<arr[x])
				less++;
		}
		if(less == (x-l))
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, m, w, i, l, r;
	cin>>n>>m>>w;
	vector<int> arr(w+1, 0);
	for(i=0; i<n; i++){
		cin>>l>>r;
		arr[l]++;
		arr[r+1]--;
	}
	for(i=1; i<w; i++){
		arr[i] += arr[i-1];
	}
	for(i=0; i<m; i++){
		cin>>l;
		cout<<arr[l]<<endl;
	}
	return 0;
}
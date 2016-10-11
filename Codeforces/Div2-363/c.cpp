#include <bits/stdc++.h>
using namespace std;

int d[200][3];

int main(){
	long long n, temp, ans=0, prev=0;
	cin>>n;
	int arr[n+1];
	for(int i=1; i<=n; i++)
		cin>>arr[i];
	for(int i=1; i<=n; i++){
		d[i][0]=max(max(d[i-1][0], d[i-1][1]), d[i-1][2]);
		if(arr[i]==1||arr[i]==3)
			d[i][1] = max(d[i-1][0]+1, d[i-1][2]+1);
		if(arr[i]==2||arr[i]==3)
			d[i][2] = max(d[i-1][0]+1, d[i-1][1]+1);
	}
	cout<<n-max(max(d[n][0], d[n][1]), d[n][2])<<endl;
	return 0;
}
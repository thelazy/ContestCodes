#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n, m, temp, ans;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int arr[n][m];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin>>arr[i][j];
			}
		}
		for(int i=1; i<n; i++){
			for(int j=0; j<m; j++){
				temp = arr[i][j];
				arr[i][j] += arr[i-1][j];
				if(j-1>=0){
					arr[i][j] = max(arr[i][j], temp+arr[i-1][j-1]);
				}
				if(j+1<m){
					arr[i][j] = max(arr[i][j], temp+arr[i-1][j+1]);
				}
			}
		}
		ans = INT_MIN;
		for(int j=0; j<m; j++){
			ans = max(ans, arr[n-1][j]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
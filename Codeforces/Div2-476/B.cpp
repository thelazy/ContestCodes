#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, kk;
	cin>>n>>kk;
	char arr[n][n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>arr[i][j];

	long long ans[n][n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			ans[i][j]=0;

	long long hl, hr, vu, vd, ht, vt, t_possible;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr[i][j]=='.'){
				hl=0;hr=0;vu=0;vd=0;
				//cout<<i<<" "<<j<<" : "<<hl<<" "<<hr<<" "<<vu<<" "<<vd<<endl;
				for(int k=j-1; k>=0; k--){
					if(arr[i][k]!='.')
						break;
					hl++;
				}
				for(int k=j+1; k<n; k++){
					if(arr[i][k]!='.')
						break;
					hr++;
				}
				ht = hl+hr+1;
				if(ht>=kk){
					t_possible = (ht-kk+1);
					ans[i][j] += min(min(t_possible, (min(hl, hr)+1)), kk);
				}

				for(int k=i-1; k>=0; k--){
					if(arr[k][j]!='.')
						break;
					vu++;
				}
				for(int k=i+1; k<n; k++){
					if(arr[k][j]!='.')
						break;
					vd++;
				}
				vt = vu+vd+1;
				if(vt>=kk){
					t_possible = (vt-kk+1);
					ans[i][j] += min(min(t_possible, (min(vu, vd)+1)), kk);
				}
			}
		}
	}
	long long maxi=-1, aa, bb;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(ans[i][j]>maxi){
				maxi = ans[i][j];
				aa = i;
				bb = j;
			}
		}
	}
	cout<<aa+1<<" "<<bb+1<<endl;
	return 0;
}
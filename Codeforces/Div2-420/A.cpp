#include <bits/stdc++.h>
using namespace std;

int main(){
	long long arr[50][50], n;
	cin>>n;
	int flag=1;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr[i][j]!=1){
				int found=0;
				for(int ii=0; ii<n; ii++){
					for(int jj=0; jj<n; jj++){
						if(arr[i][ii]+arr[jj][j]==arr[i][j]){
							found = 1;
							break;
						}
					}
					if(found==1)
						break;
				}
				if(found==0){
					flag=0;
				}
			}
			if(flag==0){
				break;
			}
		}
		if(flag==0)
			break;
	}
	if(flag){
		cout<<"Yes\n";
	}
	else{
		cout<<"No\n";
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[4][4];
	for(int i=0; i<4; i++)
		for(int j=0; j<4; j++)
			cin>>arr[i][j];
	int ans=0;
	for(int i=0; i<4; i++){
		if(arr[i][3]==1){
			if((arr[i][0]==1)||(arr[i][1]==1)||(arr[i][2]==1)||(arr[(i+1)%4][0]==1)||(arr[(i+2)%4][1]==1)||(arr[(i+3)%4][2]==1)){
				cout<<"YES\n";
				return 0;
			}
		}
	}
	cout<<"NO\n";
	return 0;
}
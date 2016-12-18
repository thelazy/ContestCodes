#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	int a1=-1,a2=-1,a3=-1,a4=-1,b1=-1,b2=-1,b3=-1,b4=-1;
	char ch;
	char mat[n][m];
	int i, j;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			cin>>mat[i][j];
		}
	}
	for(i=0; i<n; i++)
		for(j=0; j<m; j++){
			if(mat[i][j]=='X'&&a1==-1){
				a1=i;b1=j;
			}
		}
	for(i=0; i<n; i++)
		for(j=m-1; j>=0; j--){
			if(mat[i][j]=='X'&&a2==-1){
				a2=i;b2=j;
			}
		}
	for(i=n-1; i>=0; i--)
		for(j=0; j<m; j++){
			if(mat[i][j]=='X'&&a3==-1){
				a3=i;b3=j;
			}
		}
	for(i=n-1; i>=0; i--)
		for(j=m-1; j>=0; j--){
			if(mat[i][j]=='X'&&a4==-1){
				a4=i;b4=j;
			}
		}
	int flag=1;
	if(b1!=b3)
		flag=0;
	if(b2!=b4)
		flag=0;
	if(flag){
	for(i=a1; i<=a3; i++){
		for(j=b1; j<=b2; j++){
			if(mat[i][j]=='.'){
				flag=0;
				break;
			}
		}
		if(flag==0)
			break;
	}
	}
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
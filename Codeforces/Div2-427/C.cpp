#include <bits/stdc++.h>
using namespace std;

int main(){
	long long mat[101][101][11];
	for(int i=0; i<=100; i++){
		for(int j=0; j<=100; j++){
			for(int k=0; k<=10; k++)
				mat[i][j][k]=0;
		}
	}
	long long n, q, c, x, y, s;
	cin>>n>>q>>c;
	for(int i=0; i<n; i++){
		cin>>x>>y>>s;
		mat[y][x][s]++;
	}
	for(int i=1; i<=100; i++){
		for(int j=1; j<=100; j++){
			for(int k=0; k<=10; k++){
				mat[i][j][k] += mat[i][j-1][k]; 
			}
		}
	}
	for(int i=1; i<=100; i++){
		for(int j=1; j<=100; j++){
			for(int k=0; k<=10; k++){
				mat[i][j][k] += mat[i-1][j][k];
			}
		}
	}
	long long t, x1, y1, x2, y2, ans=0, kuch[11];
	for(int i=0; i<q; i++){
		cin>>t>>x1>>y1>>x2>>y2;
		ans = 0;
		for(int j=0; j<=10; j++){
			kuch[j]=0;
			kuch[j] = ((mat[y2][x2][j]-mat[y1-1][x2][j])-(mat[y2][x1-1][j]-mat[y1-1][x1-1][j]));
		}
		for(int j=0; j<=10; j++){
			ans += (kuch[j]*((j+t)%(c+1)));
		}
		cout<<ans<<endl;
	}
	return 0;
}
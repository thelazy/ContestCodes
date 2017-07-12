#include <bits/stdc++.h>
using namespace std;

int main(){   
    int n, m, l=INT_MAX, r=INT_MIN, u=INT_MAX, d=INT_MIN;
    cin>>n>>m;
    char mat[n][m];
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		cin>>mat[i][j];
    		if(mat[i][j]=='B'){
    			l = min(j, l);
    			r = max(j, r);
    			u = min(u, i);
    			d = max(d, i);
    		}
    	}
    }
    if(l==INT_MAX){
    	cout<<1<<endl;
    }
    else{
    	if((d-u)>=m || (r-l)>=n){
    		cout<<-1<<endl;
    	}
    	else{
    		int ans=0;
    		for(int i=u; i<=d; i++){
    			for(int j=l; j<=r; j++){
    				if(mat[i][j]=='W'){
    					ans++;
    				}
    			}
    		}
    		ans += ((max(r-l, d-u)+1)*abs((r-l)-(d-u)));
    		cout<<ans<<endl;
    	}
    }
    return 0;
}

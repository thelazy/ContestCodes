#include <bits/stdc++.h>
using namespace std;


int main(){
	int t, n, temp;
	cin>>t;
	for(int i=1; i<=t; i++){
		cin>>n;
		vector<int> tatti(n+1);
		for(int j=0; j<=n; j++)
			tatti[j]=j;
		for(int j=2; (j*j)<=n; j++){
			temp = j*j;
			for(int k=temp; k<=n; k++){
				tatti[k] = min(tatti[k], tatti[k-temp]+1);
			}
		}
		cout<<"Case #"<<i<<": "<<tatti[n]<<endl;
	}
	return 0;
}
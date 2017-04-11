#include <bits/stdc++.h>
using namespace std;

long long t, n, k, arr[100002], i, j, no, cnt, some, temp, con;

int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(i=1; i<=k; i++)
			arr[i]=0;
		cnt=0; some=0;
		for(i=0; i<n; i++){
			cin>>no;
			con=0;
			for(j=0; j<no; j++){
				cin>>temp;
				if(arr[temp]==0){
					arr[temp]=1;
					con++;
					cnt++;
				}
			}
			if(con==0)
				some=1;
		}
		if(cnt==k){
			if(some)
				cout<<"some\n";
			else
				cout<<"all\n";
		}
		else
			cout<<"sad\n";
	}
	return 0;
}
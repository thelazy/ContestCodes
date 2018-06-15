#include <bits/stdc++.h>
using namespace std;

vector<long long> pf(1e6+1, 0);

int main(){
	long long t, n, m, i, temp;
	for(i=2; i<=(1e6); i++){
		if(pf[i]==0){
			temp = i;
			while(temp<=(1e6)){
				pf[temp]++;
				temp+= i;
			}
		}
	}
	for(i=1; i<=(1e6); i++){
		pf[i] += pf[i-1];
	}
	cin>>t;
	while(t--){
		cin>>n>>m;
		cout<<pf[m-1]-pf[n-1]<<endl;
	}
	return 0;
}
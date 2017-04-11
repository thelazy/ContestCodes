#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, m, k, i, temp, dis = INT_MAX;
	cin>>n>>m>>k;
	for(i=1; i<=n; i++){
		cin>>temp;
		if(temp!=0){
			if(temp<=k && (10*abs(i-m))<dis)
				dis = 10*abs(i-m);
		}
	}
	cout<<dis<<endl;
	return 0;
}
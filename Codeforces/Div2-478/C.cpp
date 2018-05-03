#include <bits/stdc++.h>
using namespace std;

int main(){

	std::ios_base::sync_with_stdio(0);
	long long n, q;
	cin>>n>>q;
	long long strength[n], arrow[q];
	for(int i=0; i<n; i++){
		cin>>strength[i];
		if(i>0){
			strength[i] += strength[i-1];
		}
	}
	for(int i=0; i<q; i++){
		cin>>arrow[i];
	}
	long long arrow_cnt=0;
	for(int i=0; i<q; i++){
		arrow_cnt += arrow[i];
		if(arrow_cnt>=strength[0]){
			if(arrow_cnt>=strength[n-1]){
				arrow_cnt = 0;
				cout<<n<<endl;
			}
			else{
				long long ind = upper_bound(strength, strength+n, arrow_cnt)-strength;
				cout<<n-ind<<endl;
			}
		}
		else{
			cout<<n<<endl;
		}
	}
	//test
	return 0;
}
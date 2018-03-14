#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n, q, temp, l, r, oneCnt, zeroCnt, toP, mul;
	cin>>n>>q;
	vector<vector<int> >vec(n+1, vector<int>(31, 0));
	vector<int> ans(31);

	for(int i=1; i<=n; i++){
		cin>>temp;
		for(int j=0; j<31; j++){
			vec[i][j] = temp%2;
			temp /= 2;
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=0; j<31; j++){
			vec[i][j] += vec[i-1][j];
		}
	}
	for(int i=0; i<q; i++){
		cin>>l>>r;
		for(int j=0; j<31; j++){
			oneCnt = vec[r][j]-vec[l-1][j];
			zeroCnt = r-l+1-oneCnt;
			if(oneCnt < zeroCnt){
				ans[j] = 1;
			}
			else{
				ans[j] = 0;
			}
		}
		toP=0;
		mul=1;
		for(int j=0; j<31; j++){
			toP += (mul*ans[j]);
			mul *= 2;
		}
		cout<<toP<<endl;
	}
	return 0;
}
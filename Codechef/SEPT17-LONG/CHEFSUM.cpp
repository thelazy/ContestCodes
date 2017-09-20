#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n, mVal, mInd, temp;
	cin>>t;
	while(t--){
		cin>>n;
		mVal = INT_MAX;
		mInd = -1;
		for(int i=1; i<=n; i++){
			cin>>temp;
			if(temp<mVal){
				mVal = temp;
				mInd = i;
			}
		}
		cout<<mInd<<endl;
	}
	return 0;
}
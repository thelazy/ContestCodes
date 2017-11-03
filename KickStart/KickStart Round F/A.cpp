#include <bits/stdc++.h>
using namespace std;


int main(){
	int t, n;
	cin>>t;
	for(int i=1; i<=t; i++){
		cin>>n;
		vector<int> arr(n);
		vector<int> pivInd(n);
		for(int j=0; j<n; j++){
			cin>>arr[j];
		}
		if(n%2==0){
			int l=(n-1)/2;
			int r=l+1;
			int ind = 0;
			while(l>=0){
				pivInd[ind++]=l--;
				pivInd[ind++]=r++;
			}
		}
		else{
			int ind=1;
			pivInd[0] = (n/2);
			int l = (n/2)-1, r=(n/2)+1;
			while(l>=0){
				pivInd[ind++]=l--;
				pivInd[ind++]=r++;
			}
		}
		bool chk = true;
		int l=1, r=n;
		for(int j=0; j<n; j++){
			if(arr[pivInd[j]]==l){
				l++;
			}
			else if(arr[pivInd[j]]==r){
				r--;
			}
			else{
				chk = false;
				break;
			}
		}
		cout<<"Case #"<<i<<": ";
		if(chk){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}
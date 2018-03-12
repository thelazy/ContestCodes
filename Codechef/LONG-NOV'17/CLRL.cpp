#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t, n, ra, i, temp, l, r;
	bool flag;
	vector <long long> arr;
	cin>>t;
	while(t--){
		cin>>n>>ra;
		arr.clear();
		for(i=0; i<n; i++){
			cin>>temp;
			arr.push_back(temp);
		}
		l = -1e10;
		r = 1e17;
		flag = true;
		for(i=0; i<n; i++){
			if(arr[i]>r || arr[i]<l){
				flag = false;
				cout<<"NO\n";
				break;
			}
			if(arr[i]>ra){
				r = arr[i];
			}
			else{
				l = arr[i];
			}
		}
		if(flag){
			cout<<"YES\n";
		}
	}
	return 0;
}
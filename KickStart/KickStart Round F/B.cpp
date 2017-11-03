#include <bits/stdc++.h>
using namespace std;


int main(){
	long long t, n, e, ho, st, end;
	cin>>t;
	for(int ca=1; ca<=t; ca++){
		cin>>e>>n;
		vector<long long> arr(n);
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		sort(arr.begin(), arr.end());
		ho=0;
		st=0;
		end = n-1;
		while((st<=end)&&(arr[st]<e || (ho>0 && st<end))){
			if(arr[st]<e){
				ho++;
				e -= arr[st];
				st++;
			}
			else{
				ho--;
				e += arr[end];
				end--;
			}
		}
		cout<<"Case #"<<ca<<": "<<ho<<endl;
	}
	return 0;
}
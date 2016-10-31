#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, lSum=0, rSum=0, Ans, lSumF=0, rSumF=0, AnsF, anss;
	cin>>n;
	int arr[n+1][2];
	for(long long i=1; i<=n; i++){
		cin>>arr[i][0]>>arr[i][1];
		lSum+=arr[i][0]; rSum+=arr[i][1];
	}
	Ans = abs(lSum-rSum); AnsF = Ans;
	anss=0;
	for(long long i=1; i<=n; i++){
		lSumF = lSum - arr[i][0] + arr[i][1];
		rSumF = rSum - arr[i][1] + arr[i][0];
		if(abs(lSumF-rSumF)>AnsF){
			AnsF = abs(lSumF-rSumF);
			anss = i;
		}
	}
	cout<<anss<<endl;
	return 0;
}
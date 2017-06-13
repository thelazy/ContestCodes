#include <bits/stdc++.h>
using namespace std;

bool chk[100000];
long long out[100000];

int main(){
	long long n, temp, done=-1;
	vector<long long> A, B;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>temp;
		A.push_back(temp);
	}
	for(int i=0; i<n; i++){
		cin>>temp;
		B.push_back(temp);
	}
	int cnt=0;
	std::vector< long long> rem;
	for(int i=0; i<n; i++){
		if((A[i]==B[i])&&(chk[A[i]]==0)){
			chk[A[i]]=1;
			out[i]=A[i];
		}
		else{
			rem.push_back(i);
		}
	}
	if(rem.size()==2){
		if(chk[A[rem[0]]]==0 && chk[B[rem[1]]]==0){
			out[rem[0]]=A[rem[0]];
			chk[A[rem[0]]]=1;
			out[rem[1]]=B[rem[1]];
		}
		else{
			out[rem[0]]=B[rem[0]];
			chk[B[rem[0]]]=1;
			out[rem[1]]=A[rem[1]];
		}
	}
	else{
			for(int i=1; i<=n; i++){
				if(chk[i]==0){
					out[rem[0]]=i;
					break;
				}
			}
	}
	for(int i=1; i<=n; i++){
		cout<<out[i-1]<<" ";
	}
	return 0;
}
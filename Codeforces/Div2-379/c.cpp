#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, m, k, i, min, temp, j;
	cin>>n>>m>>k;
	long long x, s;
	cin>>x>>s;
	long long A[m], B[m], C[k], D[k];
	for(i=0; i<m; i++)
		cin>>A[i];
	for(i=0; i<m; i++)
		cin>>B[i];
	for(i=0; i<k; i++)
		cin>>C[i];
	for(i=0; i<k; i++)
		cin>>D[i];

	min = n*x;
	for(i=0; i<m; i++){
		//use lower_bound on D with value s-B[i] to find the index say j
		if(B[i]<=s){
		j = upper_bound(D, D+k, s-B[i])-D;
		if(j>0)
			temp = A[i]*(n-C[j-1]);
		else
			temp = A[i]*n;

		if(temp<min){
			min = temp;
		}
		}
	}
	j = upper_bound(D, D+k, s)-D;
	if(j>0)
		temp = x*(n-C[j-1]);
	else
		temp = x*n;

	if(temp<min){
		min = temp;
	}
	cout<<min<<endl;

	return 0;
}
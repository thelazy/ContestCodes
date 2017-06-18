#include <bits/stdc++.h>
using namespace std;

int arr[200010];
int maxi=-1, mini=200100;
int n, k, q;
int l, r;
int main(){
	cin>>n>>k>>q;
	for(int i=0; i<n; i++){
		cin>>l>>r;
		if(l<mini)
			mini = l;
		if(r>maxi)
			maxi = r;
		arr[l]++;
		arr[r+1]--;
	}
	for(int i=mini; i<=maxi; i++){
		arr[i] += arr[i-1];
	}
	for(int i=mini; i<=maxi; i++){
		if(arr[i]>=k){
			arr[i]=1;
		}
		else{
			arr[i]=0;
		}
	}
	for(int i=mini; i<=maxi; i++){
		arr[i] += arr[i-1];
	}
	for(int i=0; i<q; i++){
		cin>>l>>r;
		if(l>r||(l>maxi && r>maxi)||(l<mini && r<mini))
			cout<<0<<endl;
		else
			cout<<(arr[(min(r, maxi))]-arr[max(l, mini)-1])<<endl;
	}
	return 0;
}
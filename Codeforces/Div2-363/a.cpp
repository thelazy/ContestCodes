#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, min=10000000000; string s;
	cin>>n;
	long long arr[n];
	cin>>s;
	for(long long i=0; i<n; i++)
		cin>>arr[i];
	for(long long i=1; i<n; i++){
		if(s[i]=='L'&&s[i-1]=='R'){
			if(arr[i]-arr[i-1]<min)
				min = arr[i]-arr[i-1];
		}
	}
	if(min<10000000000)
		cout<<min/2<<endl;
	else
		cout<<-1<<endl;
	return 0;
}
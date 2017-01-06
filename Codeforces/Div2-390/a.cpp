#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n+1];
	arr[0]=0;
	for(int i=1; i<=n; i++){
		cin>>arr[i];
		arr[i] += arr[i-1];
	}
	if(n==1){
		if(arr[1]==0)
			cout<<"NO"<<endl;
		else{
			cout<<"YES"<<endl;
			cout<<1<<endl<<1<<" "<<1;
		}
	}
	else{
		if(arr[n]!=0){
			cout<<"YES"<<endl;
			cout<<1<<endl;
			cout<<1<<" "<<n<<endl;
			return 0;
		}
		int i=1, flag=1;
		for(i=1; i<=n; i++){
			if((arr[i]-arr[0])!=0&&(arr[n]-arr[i])!=0){
				cout<<"YES"<<endl;
				cout<<2<<endl;
				cout<<1<<" "<<i<<endl;
				cout<<i+1<<" "<<n<<endl;
				flag=0;
				break;
			}
		}
		if(flag)
			cout<<"NO"<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1; i<(n/2); i++){
			cout<<2*i<<" "<<2*i-1<<" ";
		}
		if(n%2==1){
			cout<<n-1<<" "<<n<<" "<<n-2<<endl;
		}
		else{
			cout<<n<<" "<<n-1<<endl;
		}
	}
	return 0;
}
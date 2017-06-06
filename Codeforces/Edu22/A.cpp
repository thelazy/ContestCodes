#include <bits/stdc++.h>
using namespace std;

 
int main(){
	long long n, p;
	cin>>n;
	long long nsum=0, temp, temp1, mf=1e18;
	for(int i=0; i<n; i++){
		cin>>temp;
		nsum += temp;
	}
	cin>>p;
	int flag=0;
	for(int i=0; i<p; i++){
		cin>>temp>>temp1;
		if(temp>nsum){
			if(temp<mf){
				mf = temp;
				flag=1;
			}

		}
		else if(temp<=nsum && nsum<=temp1){
			cout<<nsum<<endl;
			return 0;
		}
	}
	if(flag)
		cout<<mf<<endl;
	else
		cout<<-1<<endl;
	return 0;
}
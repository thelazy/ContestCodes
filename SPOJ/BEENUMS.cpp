#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	while(1){
		cin>>n;
		if(n==-1)
			break;
		if((n-1)%3==0){
			n = (n-1)/3;
			n = 4*n + 1;
			long long s = sqrt(n);
			if(s*s==n){
				s = s+1;
				if(s%2==0){
					cout<<"Y\n";
				}
				else{
					cout<<"N\n";
				}
			}
			else{
				cout<<"N\n";
			}
		}
		else{
			cout<<"N\n";
		}
	}
	return 0;
}
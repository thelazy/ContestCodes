#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t, n, temp;
	cin>>t;
	while(t--){
		cin>>n>>temp;
		if(temp==0)
			printf("Airborne wins.\n");
		else
			printf("Pagfloyd wins.\n");
	}
	return 0;
}
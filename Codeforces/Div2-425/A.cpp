#include <bits/stdc++.h>
using namespace std;
 
int main(){
	long long n, k, div, rem;
	cin>>n>>k;
	div = n/k;
	rem = n%k;
	if(div%2){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
    return 0;
}
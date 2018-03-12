#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, p, n;
	cin>>t;
	while(t--){
		cin>>n>>p;
		if((n<p)||(n%p!=0)||p<=2){
			printf("impossible\n");
			continue;
		}
		for(int i=0; i<(n/p); i++){
			printf("a");
			for(int j=0; j<p-2; j++)
				printf("b");
			printf("a");
		}
		printf("\n");
	}
	return 0;
}
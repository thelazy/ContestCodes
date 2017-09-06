#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, d;
	while(1){
		cin>>a>>d;
		if(a==0)
			break;
		int a1[a], a2[d];
		for(int i=0; i<a; i++)
			cin>>a1[i];
		for(int i=0; i<d; i++)
			cin>>a2[i];
		sort(a1, a1+a);
		sort(a2, a2+d);
		if(a1[0]>=a2[1]){
			printf("N\n");
		}
		else
			printf("Y\n");
	}
	return 0;
}
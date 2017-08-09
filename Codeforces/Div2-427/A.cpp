#include <bits/stdc++.h>
using namespace std;

int main(){
	long long s, v1, v2, t1, t2;
	cin>>s>>v1>>v2>>t1>>t2;
	long long a=s*v1+2*t1;
	long long b=s*v2+2*t2;
	if(a<b){
		printf("First\n");
	}
	else if(b<a){
		printf("Second\n");
	}
	else{
		printf("Friendship\n");
	}
	return 0;
}
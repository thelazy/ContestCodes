#include <bits/stdc++.h>
using namespace std;

int main(){
	long long num;
	cin>>num;
	long long i=1, prev=1;
	for(i=2; i<=(sqrt(num)+1); i++){
		if(num%i==0){
			prev=i;
		}
	}
	prev = min(prev, num/prev);
	cout<<prev<<" "<<(num/prev)<<endl;
	return 0;
}
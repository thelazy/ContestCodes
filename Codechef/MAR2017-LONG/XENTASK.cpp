#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t, n, e1, o1, e2, o2, i, temp;
	cin>>t;
	while(t--){
		cin>>n;
		e1=e2=o1=o2=0;
		for(i=0; i<n; i++){
			cin>>temp;
			if(i%2==0)
				e1+=temp;
			else
				o1+=temp;
		}
		for(i=0; i<n; i++){
			cin>>temp;
			if(i%2==0)
				e2+=temp;
			else
				o2+=temp;
		}
		cout<<min(e1+o2, e2+o1)<<endl;
	}
	return 0;
}
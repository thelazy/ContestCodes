#include <bits/stdc++.h>
using namespace std;


int main(){
	long long t, n, a, b, temp, i;
	cin>>t;
	while(t--){
		cin>>n;
		a=0;
		b=0;
		for(i=0; i<n; i++){
			cin>>temp;
			if(temp<0)
				b++;
			else
				a++;
		}
		if(a==0 || b==0){
			cout << a+b<< " "<< a+b << endl;
		}
		else{
			cout<< max(a, b) << " " << min(a, b) <<endl;
		}
	}
	return 0;
}
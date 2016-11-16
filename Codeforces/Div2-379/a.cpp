#include <bits/stdc++.h>

using namespace std;

int main(){
	char name; long long n, i, cA=0, cD=0;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>name;
		if(name=='A')
			cA++;
		else
			cD++;
	}
	if(cA>cD)
		cout<<"Anton\n";
	else if(cA<cD)
		cout<<"Danik\n";
	else
		cout<<"Friendship\n";
	return 0;
}
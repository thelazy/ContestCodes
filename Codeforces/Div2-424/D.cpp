#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, k, p;
	cin>>n>>k>>p;
	long long int person[n];
	long long int keys[k];
	for(int i=0; i<n; i++)
		cin>>person[i];
	for(int j=0; j<k; j++)
		cin>>keys[j];
	sort(person, person+n);
	sort(keys, keys+k);
	long long ans=1e18, temp;
	for(int i=0; i<=(k-n); i++){
		temp=0;
		for(int j=0; j<n; j++){
			temp = max(temp, (abs(person[j]-keys[j+i]) + abs(keys[i+j]-p)));
		}
		ans = min(ans, temp);
	}
	cout<<ans<<endl;
	return 0;
}
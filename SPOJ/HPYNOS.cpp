#include <bits/stdc++.h>
using namespace std;

long long fun(long long n){
	int temp=0, m;
	while(n>0){
		m = n%10;
		temp += (m*m);
		n /= 10;
	}
	return temp;
}

int main(){
	long long n,ans=0;
	unordered_set<long long> mp;
	cin>>n;
	while(n!=1 && mp.find(n)==mp.end()){
		mp.insert(n);
		n = fun(n);
		ans++;
	}
	if(n==1){
		cout<<ans<<endl;
	}
	else{
		cout<<-1<<endl;
	}
	return 0;
}
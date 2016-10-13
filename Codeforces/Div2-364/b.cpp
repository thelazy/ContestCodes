#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, m, a, b, ans;
	unordered_map <long long, int> i;
	unordered_map <long long, int> j;
	cin>>n>>m;
	while(m--){
		cin>>a>>b;
		i[a] = 1;
		j[b] = 1;
		ans = (n-i.size())*(n-j.size());
		cout<<ans<<" ";
	}
	
	return 0;
}
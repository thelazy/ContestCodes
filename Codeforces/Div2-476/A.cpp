#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int k, n, s, p;
	cin>>k>>n>>s>>p;
	long long int p_need = (n+s-1)/s;
	long long int t_sheet = p_need*k;
	cout<<((t_sheet+p-1)/p)<<endl;
	return 0;
}
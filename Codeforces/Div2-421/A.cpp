#include <bits/stdc++.h>
using namespace std;

int main(){
	long long c, v0, v1, a, l;
	cin>>c>>v0>>v1>>a>>l;
	long long days = 1, pages = v0, today;
	while(pages<c){
		today = min(v0 + days*a, v1);
		pages += (today-l);
		days++;
	}
	cout<<days<<endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	long long x, y, l, r, temp1, temp2;
	vector <long long> l3;
	cin>>x>>y>>l>>r;
	long long xx=x, yy=y;
	x= min(xx, yy);
	y=max(xx, yy);
	temp1 = 1;
	while(temp1<=r){
		temp2 = 1;
		while(temp2<=r){
			if(temp1+temp2>=l && temp1+temp2<=r){
				l3.push_back(temp1+temp2);
			}
			if(temp2>(r/y))
				break;
			temp2 = temp2 * y;

		}
		if(temp1>(r/x))
				break;
		temp1 = temp1*x;
	}
	l3.push_back(l-1);
	l3.push_back(r+1);
	sort(l3.begin(), l3.end());
	long long ans=-1e10;
	for(int i=1; i<l3.size(); i++){
		if((l3[i]-l3[i-1]-1)>ans)
			ans = (l3[i]-l3[i-1]-1);
	}
	cout<<(max((long long)0, ans))<<endl;
	return 0;
}
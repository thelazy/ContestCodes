#include <bits/stdc++.h>
using namespace std;

int mp[1000020];

int main(){
	long long n, m, k, temp, i, pos=1, temp1;
	scanf("%lld %lld %lld", &n, &m, &k);
	//unordered_map < long long, int> mp;
	for(i=0; i<m; i++){
		scanf("%lld", &temp);
		mp[temp]=1;
	}
	int flag=1;
	for(i=0; i<k; i++){
		if(flag==1 && mp[pos]==1){
			flag=0;
			break;
		}
		scanf("%lld %lld", &temp, &temp1);
		if(flag){
			if(temp==pos){
				pos = temp1;
			}
			else if(temp1==pos){
				pos = temp;
			}
		}
	}
	cout<<pos<<endl;
	return 0;
}
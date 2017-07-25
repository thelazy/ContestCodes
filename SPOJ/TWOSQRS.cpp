#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<long long> arr((1e6+1));
	long long i, t, num, l, r, sum;
	bool found;
	for(i=0; i<=(1e6); i++){
		arr[i] = (i*i);
	}
	cin>>t;
	while(t--){
		cin>>num;
		if((sqrt(num)*(long long)2)==num){
			printf("Yes\n");
		}
		else{
			l = 0;
			r = lower_bound(arr.begin(), arr.end(), num)-arr.begin();
			if(r>=arr.size())
				r--;
			found = false;
			while(l<=r){
				sum = (arr[l]+arr[r]);
				if(sum==num){
					found = true;
					break;
				}
				if(sum>num){
					r--;
				}
				else{
					l++;
				}
			}
			if(found)
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
	return 0;
}
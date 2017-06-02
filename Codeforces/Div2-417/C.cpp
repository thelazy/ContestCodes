#include <bits/stdc++.h>
using namespace std;

long long price[100010];

int main(){
	long long n, S;
	scanf("%lld %lld", &n, &S);
	for(int i=1; i<=n; i++)
		scanf("%lld", &price[i]);
	long long l=1, r=n, mid, temp, inside, k = 0, val=0;
	priority_queue <long long> pq;
	while(l<=r){
		mid = (l+r)/2;
		inside = 0;
		for(int i=1; i<=n; i++){
			temp = (price[i]+i*mid);
			if(pq.size()<mid){
				inside += temp;
				pq.push(temp);
			}
			else if(temp<pq.top()){
				inside -= pq.top();
				pq.pop();
				inside += temp;
				pq.push(temp);
			}
		}
		for (int i = 0; i < mid; ++i){
			pq.pop();
		}
		if(inside <= S){
				k = mid;
				val = inside;
				l = mid+1;
		}
		else{
			r = mid-1;
		}
	}

	cout<<k<<" "<<val<<endl;
	return 0;
}
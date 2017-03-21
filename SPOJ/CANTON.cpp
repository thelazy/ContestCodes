#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t, num, n, temp, mid, hi, lo;
	cin>>t;
	while(t--){
		cin>>num; 
		n=0;
		lo=0; hi=10000;
		while(hi>=lo){
			mid = (hi+lo)/2;
			temp = (mid)*(mid+1)/2;
			if(num>temp){
				n = mid;
				lo = mid+1;
			}
			else{
				hi = mid-1;
			}
		}
		n++;
		temp = num - ((n-1)*(n)/2);
		//cout<<n<<" "<<temp<<endl;
		n++;
		if((n%2)){
			cout<<"TERM "<<num<<" IS "<<temp<<"/"<<(n-temp)<<endl;
		}
		else{
			cout<<"TERM "<<num<<" IS "<<(n-temp)<<"/"<<temp<<endl;
		}
	}
	return 0;
}
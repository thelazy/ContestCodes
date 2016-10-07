#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	long long n;
	cin>>n; char a;
	ll arr[n]; ll count=0;ll ind = 0;
	for(long long i=0; i<n; i++){
	    cin>>a;
	    //cout<<a;
	    if(a=='B'){
	        count++;
	    }
	    else{
	    	//cout<<count<<endl;
	        if(count>0){
	            arr[ind]=count;
	            ind++;
	        }
	        count=0;
	    }
	}
	if(count>0){
		arr[ind++]=count;
	}
	cout<<ind<<endl;
	for(ll i=0; i<ind; i++)
	    cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
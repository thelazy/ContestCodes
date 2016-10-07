#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll t, n, num, score, arr1[6], temp, maxn, maxi, maxc;
	cin>>t;
	while(t--){
	    cin>>n;
	    ll arr[n];
	    for(ll i=0; i<n; i++){
	        arr[i]=0;
	        cin>>num;
	        for(ll j=0; j<6; j++)
	            arr1[j]=0;
	        for(ll j=0; j<num; j++){
	            cin>>temp;
	            arr1[temp-1]++;
	        }
	        arr[i]+= num;
	        sort(arr1, arr1+6);
	        arr[i]+= 4*arr1[0];
	        arr1[1]-=arr1[0]; arr1[2]-=arr1[0];
	        arr[i]+= 2*arr1[1];
	        arr1[2]-=arr1[1];
	        arr[i]+= arr1[2];
	    }
	    maxn = 0; maxi = 0; maxc=0;
	    for(ll i=0; i<n; i++){
	        if(arr[i]>maxn){
	            maxn=arr[i];
	            maxc=1;
	            maxi=i;
	        }
	        else
	            if(arr[i]==maxn)
	                maxc++;
	    }
	    if(maxc==1){
	        if(maxi==0)
	            cout<<"chef"<<endl;
	        else
	            cout<<maxi+1<<endl;
	    }
	    else
	        cout<<"tie"<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int dis(int a, int b){
	if(b>a){
		return b-a-1;
	}
	return (13-a+b);
}

int main(){
	long long arr[14], arr1[14], ans=0, temp, ans1;
	for(int i=0; i<14; i++){
		cin>>arr[i];
	}
	for(int i=0; i<14; i++){
		if(arr[i]>0){
			ans1 = 0;
			for(int j=0; j<14; j++){
				if(i!=j)
					temp = arr[j] + (arr[i]/14);
				else
					temp = (arr[i]/14);
				if(dis(i, j)<(arr[i]%14)){
					temp++;
				}
				if(temp%2==0){
					ans1 += temp;
				}
			}
			ans = max(ans, ans1);
		}
	}
	cout<<ans<<endl;
	return 0;
}
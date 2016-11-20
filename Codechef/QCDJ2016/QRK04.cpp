#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, temp, prev=0, cnt=0, max=0, cnt1;
	scanf("%lld", &n);
	long long arr[n];
	for(long long i=0; i<n; i++){
		scanf("%lld", &temp);
		arr[i]=temp;
		if(temp==prev)
			cnt++;
		prev = temp;
	}
	cnt1 = cnt;
	sort(arr, arr+n);
	temp = arr[0];
	cnt=0;
	for(long long i=0; i<n; i++){
		if(arr[i]==temp){
			cnt++;
		}
		else{
			if(cnt>max){
				max=cnt;
			}
			cnt = 0;
			temp = arr[i]; i--;
		}

	}
	if(cnt>max)
		max=cnt;
	if(n==1)
		cout<<0<<endl;
	else{
		temp = n/2;
		if(temp%2!=0)temp++;
		cnt = cnt1/2;
		if(cnt1%2!=0)cnt++;

		if(max>temp)
			cout<<-1<<endl;
		else
			cout<<cnt<<endl;
	}
	return 0;
}
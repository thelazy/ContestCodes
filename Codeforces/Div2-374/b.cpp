#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	long long n, k, temp, temp1, temp2;
	cin>>n>>k;
	string str;
	int arr[101];
	for(int i=0; i<=100; i++)
		arr[i]=0;
	for(long long i=0; i<n; i++){
		cin>>str;
		arr[str.length()]++;
	}
	cin>>str;
	temp=0;
	for(int i=1; i<str.length(); i++)
		temp += arr[i];
	temp1 = temp/k;
	cout<<temp+temp1*5+1<<" ";
	temp += arr[str.length()]-1;
	temp1 = temp/k;
	cout<<temp+temp1*5+1<<endl;
	return 0;
}
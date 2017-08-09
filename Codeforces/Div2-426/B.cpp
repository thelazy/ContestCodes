#include <bits/stdc++.h>
using namespace std;

int arr[1000010];

int main(){
	long long n, g;
	cin>>n>>g;
	string s;
	cin>>s;
	int f[26], l[26], temp;
	for(int i=0; i<26; i++){
		f[i]=INT_MAX;
		l[i]=INT_MAX;
	}
	for(int i=0; i<s.length(); i++){
		temp = s[i]-'A';
		if(f[temp]==INT_MAX){
			f[temp] = i;
		}
		l[temp] = i;
	}
	sort(f, f+26);
	sort(l, l+26);
	int ans=-1, j=0, cnt=0;
	for(int i=0; i<26 && f[i]!=INT_MAX; i++){
		while(l[j]<f[i]){
			cnt--;
			j++;
		}
		cnt++;
		ans = max(ans, cnt);
	}
	if(ans>g){
		cout<<"YES\n";
	}
	else
		cout<<"NO\n";
	return 0;
}
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
	long long t, n, ans;
	int arr[26];
	bool arr1[26];
	string s;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<26; i++){
			arr[i]=0;
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<26; j++){
				arr1[j] = false;
			}
			cin>>s;
			for(int j=0; j<s.length(); j++){
				arr1[s[j]-'a'] = true;
			}
			for(int j=0; j<26; j++){
				if(arr1[j]){
					arr[j]++;
				}
			}
		}
		ans = 0;
		for (int i = 0; i < 26; ++i){
			if(arr[i]==n){
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
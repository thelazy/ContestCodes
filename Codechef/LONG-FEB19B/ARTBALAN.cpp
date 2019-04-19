#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t, n, ans, temp, cnt;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		n = s.length();
		vector<long long> v(26, 0);
		for(int i=0; i<n; i++){
			v[s[i]-'A']++;
		}
		ans = 1e17;
		sort(v.begin(), v.end());
		for(long long i=26; i>=1; i--){
			if(n%i==0){
				cnt = n/i;
				temp=0;
				//cout<<cnt<<endl;
				if(cnt>=v[25]){
					for(int j=25; j>=(26-i); j--){
						temp += (abs(v[j]-cnt));
					}
				}
				else{
					for(int j=(26-i); j<=25; j++){
						if(v[j]>=cnt)
							break;
						temp += (abs(v[j]-cnt));
					}
				}
				ans = min(ans, temp);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

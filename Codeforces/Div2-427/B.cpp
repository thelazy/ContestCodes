#include <bits/stdc++.h>
using namespace std;

int main(){
	long long k;
	string s;
	cin>>k;
	cin>>s;
	long long cnt[10], sum=0;
	for(int i=0; i<10; i++)
		cnt[i]=0;
	for(long long i=0; i<s.length(); i++){
		cnt[s[i]-'0']++;
		sum += ((long long)(s[i]-'0'));
		if(sum>=k){
			cout<<0<<endl;
			return 0;
		}
	}
	long long makeSum = (k-sum), temp, ans=0;
	for(int i=0; i<9; i++){
		temp = ((makeSum+8-i)/(9-i));
		if(cnt[i]<temp){
			ans += cnt[i];
			makeSum -= (cnt[i]*(9-i));
		}
		else{
			ans += temp;
			cout<<ans<<endl;
			return 0;
		}
	}
	return 0;
}
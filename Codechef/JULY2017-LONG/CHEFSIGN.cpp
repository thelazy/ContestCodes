#include <bits/stdc++.h>
using namespace std;

int main(){   
    int t, cnt1, cnt2, ans;
    string s;
    cin>>t;
    while(t--){
    	cnt1=0;
    	cnt2=0;
    	ans=0;
    	cin>>s;
    	for(int i=0; i<s.length(); i++){
    		if(s[i]=='>'){
    			cnt1++;cnt2=0;
    			ans = max(ans, cnt1);
    		}
    		else if(s[i]=='<'){
    			cnt2++;cnt1=0;
    			ans = max(ans, cnt2);
    		}
    	}
    	cout<<(ans+1)<<endl;
    }
    return 0;
}

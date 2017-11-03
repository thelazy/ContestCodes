#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, ans=0, nn;
	string s;
	cin>>n>>s;
	set <char> st;
	for(int i=0; i<s.length(); i++){
		if(s[i]>='a'&&s[i]<='z'){
			st.insert(s[i]);
		}
		else{
			nn = st.size();
			ans = max(ans, nn);
			st.clear();
		}
	}
	nn = st.size();
	ans = max(ans, nn);
	cout<<ans<<endl;
	return 0;
}
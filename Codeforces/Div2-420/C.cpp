#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, mini=1, ans=0, no;
	char s[10];
	scanf("%d", &n);
	stack<int> st;
	for(int i=0; i<(2*n); i++){
		scanf("%s", s);
		if(s[0]=='a'){
			scanf("%d", &no);
			st.push(no);
		}
		else{
			if(st.size()>0){
				if(st.top()==mini){
					st.pop();
				}
				else{
					ans++;
					while(!st.empty())
						st.pop();
				}
			}
			mini++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
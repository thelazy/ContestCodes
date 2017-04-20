#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t, n;
	cin>>t;
	while(t--){
		cin>>n;
		stack <int> st;
		if(n==0)
			cout<<10<<endl;
		else if(n==1)
			cout<<1<<endl;
		else{
			for(int i=9; i>=2; i--){
				while(n%i==0){ 
					n /= i;
					st.push(i);
				}
			}
			if(st.size()==0||n!=1)
				cout<<-1<<endl;
			else{
				while(!st.empty()){
					cout<<st.top();
					st.pop();
				}
				cout<<endl;
			}
		}
	}
	return 0;
}
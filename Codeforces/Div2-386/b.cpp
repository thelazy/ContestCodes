#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;int l;
	cin>>l;
	cin>>s;
	queue<char> after;
	stack<char> before;
	if(l%2==0){
		for(int i=0; i<l; i+=2){
			before.push(s[i]);
			after.push(s[i+1]);
		}
	}
	else{
		before.push(s[0]);
		for(int i=1; i<l; i+=2){
			before.push(s[i]);
			after.push(s[i+1]);
		}
	}
	while(!before.empty()){
		char c = before.top();
		before.pop();
		cout<<c;
	}
	while(!after.empty()){
		char c = after.front();
		after.pop();
		cout<<c;
	}
	cout<<endl;
	return 0;
}
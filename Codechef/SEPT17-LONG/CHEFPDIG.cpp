#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, a, b;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		if(s.length()<=1)
			cout<<endl;
		else{
			vector<int> no(10, 0);
			for(int i=0; i<s.length(); i++){
				no[(s[i]-'0')]++;
			}
			for(int i=65; i<=90; i++){
				if((i%10)==(i/10)){
					if(no[(i/10)]>1)
						cout<<((char)(i));
				}
				else if(no[i%10]>0 && no[i/10]>0){
					cout<<((char)(i));
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
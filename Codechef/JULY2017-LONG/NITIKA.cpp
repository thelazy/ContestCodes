#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, sc;
	string s;
	cin>>t;
	getline(cin,s);
	string sp[3];
	while(t--){
		getline(cin,s);
		int ind=0, pr=0, i=0;
		for(i=0; i<s.length(); i++){
			if(s[i]==' '){
				sp[ind] = s.substr(pr, i-pr);
				pr = i+1;
				ind++;
			}
		}
		sp[ind] = s.substr(pr, i-pr);
		ind++;
		for(int i=0; i<ind-1; i++){
			cout<<(char)toupper(sp[i][0])<<". ";
		}
		cout<<(char)toupper(sp[ind-1][0]);
		for(i=1; i<sp[ind-1].length(); i++)
			cout<<(char)tolower(sp[ind-1][i]);
		cout<<endl;
	}
	return 0;
}
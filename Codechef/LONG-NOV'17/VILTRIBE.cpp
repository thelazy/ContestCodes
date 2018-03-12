#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	string s;
	char lastChar;
	int lastInd, cntA, cntB;
	cin>>t;
	while(t--){
		lastChar = '~';
		lastInd = -1;
		cntA = 0;
		cntB = 0;
		cin>>s;
		for(int i=0; i<s.length(); i++){
			if(s[i]=='A'){
				if(lastChar == 'A'){
					cntA += (i-lastInd-1);
				}
				lastChar = 'A';
				lastInd = i;
				cntA++;
			}
			else if(s[i]=='B'){
				if(lastChar == 'B'){
					cntB += (i-lastInd-1);
				}
				lastChar = 'B';
				lastInd = i;
				cntB++;
			}
		}
		cout<<cntA<<" "<<cntB<<endl;
	}
	return 0;
}
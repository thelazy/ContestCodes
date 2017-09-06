#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t, n, l, i;
	string s, temp;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>s;
		l = s.length();
		vector<int> ans(8, 0);
		if(l>=3){
			for(i=0; i<=(l-3); i++){
				temp = s.substr(i, 3);
				if(temp=="TTT"){
					ans[0]++;
				}
				else if(temp=="TTH"){
					ans[1]++;
				}
				else if(temp=="THT"){
					ans[2]++;
				}
				else if(temp=="THH"){
					ans[3]++;
				}
				else if(temp=="HTT"){
					ans[4]++;
				}
				else if(temp=="HTH"){
					ans[5]++;
				}
				else if(temp=="HHT"){
					ans[6]++;
				}
				else if(temp=="HHH"){
					ans[7]++;
				}
			}
		}
		cout<<n<<" ";
		for(int i=0; i<8; i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
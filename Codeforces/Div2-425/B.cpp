#include <bits/stdc++.h>
using namespace std;

bool chk[26];
 
int main(){
	string s, p, temp;
	cin>>s;
	memset(chk, false, sizeof(chk));
	for(int i=0; i<s.length(); i++){
		chk[s[i]-'a']=true;
	}
	cin>>p;
	int alp=0, que=0, star=0, n, ext, ind;
	for(int i=0; i<p.length(); i++){
		if(p[i]=='?')
			que++;
		else if(p[i]=='*')
			star++;
		else
			alp++;
	}
	cin>>n;
	while(n--){
		cin>>temp;
		if(temp.length()<(alp+que)){
			printf("NO\n");
		}
		else if((temp.length()>(alp+que))&&(star==0)){
			printf("NO\n");
		}
		else{
			ext = (temp.length()-(alp+que));
			char fin[(temp.length()+1)];
			ind = 0;
			for(int i=0; i<p.length(); i++){
				if(p[i]=='*'){
					for(int j=0; j<ext; j++){
						fin[ind++]= '*';
					}
				}
				else{
					fin[ind++]=p[i];
				}
			}
			bool ok = true;
			// cout<<temp<<endl;
			// for(int i=0; i<temp.length(); i++)
			// 	cout<<fin[i];
			// cout<<endl;
			for(int i=0; i<temp.length(); i++){
				if((fin[i]=='?')){
					if(chk[temp[i]-'a']==false){
						//cout<<"1"<<endl;
						ok = false;
						break;
					}
				}
				else if((fin[i]=='*')){
					if((chk[temp[i]-'a']==true)){
						//cout<<"2"<<endl;
						ok = false;
						break;
					}
				}
				else if(fin[i]!=temp[i]){
					//cout<<"3"<<endl;
					ok = false;
					break;
				}
			}
			if(ok){
				printf("YES\n");
			}
			else
				printf("NO\n");
		}
	}
    return 0;
}
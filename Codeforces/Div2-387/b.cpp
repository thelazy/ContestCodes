#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	long long l, A=0, G=0, C=0, T=0, temp;
	cin>>l;
	cin>>s;
	if(l%4==0){
		for(int i=0; i<l; i++){
			if(s[i]=='A')A++;
			else if(s[i]=='G')G++;
			else if(s[i]=='C')C++;
			else if(s[i]=='T')T++;
		}
		temp=l/4;
		if(A>temp||G>temp||C>temp||T>temp){
			cout<<"==="<<endl;
			return 0;
		}
		int i=0;
		for(i; i<l; i++){
			if(s[i]=='?'){
				if(A<temp){
					s[i]='A';A++;
				}
				else if(G<temp){
					s[i]='G';G++;
				}
				else if(C<temp){
					s[i]='C';C++;
				}
				else if(T<temp){
					s[i]='T';T++;
				}
			}
		}
		cout<<s<<endl;
		return 0;
	}
	else{
		cout<<"==="<<endl;
	}
	return 0;
}
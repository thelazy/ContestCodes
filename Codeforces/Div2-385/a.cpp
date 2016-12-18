#include <bits/stdc++.h>

using namespace std;

int main(){
	char str[1000], cstr[1000];
	int l=0;
	cin>>str;
	for(int i=0; str[i]!='\0'; i++)
		l++;
	cstr[l]='\0';
	set <string> abc;
	abc.insert(str);
	for(int i=0; i<l; i++){
		cstr[0]=str[l-1];
		for(int j=1; j<l; j++)
			cstr[j]=str[j-1];
		abc.insert(cstr);
		for(int j=0; j<l; j++)
			str[j]=cstr[j];
	}
	cout<<abc.size()<<endl;
	return 0;
}
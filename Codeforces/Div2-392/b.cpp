#include <bits/stdc++.h>

using namespace std;

int main(){
	char arr[101];
	cin>>arr;
		int r=0, rr=0, b=0, bb=0, y=0, yy=0, g=0, gg=0;
		for(int i=0; arr[i]!='\0'; i++){
			if(arr[i]=='R')
				r = i%4;
			else if(arr[i]=='B')
				b = i%4;
			else if(arr[i]=='Y')
				y = i%4;
			else if(arr[i]=='G')
				g = i%4;
		}
		for(int i=0; arr[i]!='\0'; i++){
			if(arr[i]=='!'){
				if(i%4==r)rr++;
				else if(i%4==b)bb++;
				else if(i%4==y)yy++;
				else if(i%4==g)gg++;
			}
		}
		cout<<rr<<" "<<bb<<" "<<yy<<" "<<gg<<endl;
	return 0;
}
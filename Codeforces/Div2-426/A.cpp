#include <bits/stdc++.h>
using namespace std;

int main(){
	char a, b;
	cin>>a>>b;
	int n;
	cin>>n;
	n = n%4;
	if(n==0 || n==2){
		cout<<"undefined\n";
	}
	else{
		if(n==1){
			if(a=='^'){
				if(b=='>'){
					cout<<"cw\n";
				}
				else{
					cout<<"ccw\n";
				}
			}
			else if(a=='>'){
				if(b=='v'){
					cout<<"cw\n";
				}
				else{
					cout<<"ccw\n";
				}
			}
			else if(a=='v'){
				if(b=='<'){
					cout<<"cw\n";
				}
				else{
					cout<<"ccw\n";
				}
				
			}
			else if(a=='<'){
				if(b=='^'){
					cout<<"cw\n";
				}
				else{
					cout<<"ccw\n";
				}
			}
		}
		if(n==3){
			if(a=='^'){
				if(b=='<'){
					cout<<"cw\n";
				}
				else{
					cout<<"ccw\n";
				}
			}
			else if(a=='>'){
				if(b=='^'){
					cout<<"cw\n";
				}
				else{
					cout<<"ccw\n";
				}
			}
			else if(a=='v'){
				if(b=='>'){
					cout<<"cw\n";
				}
				else{
					cout<<"ccw\n";
				}
				
			}
			else if(a=='<'){
				if(b=='v'){
					cout<<"cw\n";
				}
				else{
					cout<<"ccw\n";
				}
			}
		}
	}
	return 0;
}
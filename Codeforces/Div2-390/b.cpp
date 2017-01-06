#include <bits/stdc++.h>

using namespace std;

int main(){
	char cc[4][4];
	for(int i=0; i<4; i++)
		for(int j=0; j<4; j++)
			cin>>cc[i][j];
	int x, o, d;
	for(int i=0; i<4; i++){
		x=0; o=0; d=0;
		for(int j=0; j<3; j++){
			if(cc[j][i]=='x')x++;
			else if(cc[j][i]=='o')o++;
			else if(cc[j][i]=='.')d++;
		}
		if(x==3){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
		if(x==2&&d==1){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
		x=0; o=0; d=0;
		for(int j=1; j<=3; j++){
			if(cc[j][i]=='x')x++;
			else if(cc[j][i]=='o')o++;
			else if(cc[j][i]=='.')d++;
		}
		if(x==3){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
		if(x==2&&d==1){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}

	}
	for(int j=0; j<4; j++){
		x=0; o=0; d=0;
		for(int i=0; i<3; i++){
			if(cc[j][i]=='x')x++;
			else if(cc[j][i]=='o')o++;
			else if(cc[j][i]=='.')d++;
		}
		if(x==3){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
		if(x==2&&d==1){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
		x=0; o=0; d=0;
		for(int i=1; i<=3; i++){
			if(cc[j][i]=='x')x++;
			else if(cc[j][i]=='o')o++;
			else if(cc[j][i]=='.')d++;
		}
		if(x==3){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
		if(x==2&&d==1){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
	}
	x=0; o=0; d=0;
	for(int i=0; i<3; i++){
		if(cc[i][i]=='x')x++;
		else if(cc[i][i]=='o')o++;
		else if(cc[i][i]=='.')d++;
	}
		if(x==3){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
		if(x==2&&d==1){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
	x=0; o=0; d=0;
	for(int i=1; i<=3; i++){
		if(cc[i][i]=='x')x++;
		else if(cc[i][i]=='o')o++;
		else if(cc[i][i]=='.')d++;
	}
		if(x==3){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
		if(x==2&&d==1){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
	x=0; o=0; d=0;
	for(int i=0; i<3; i++){
		if(cc[i][3-i]=='x')x++;
		else if(cc[i][3-i]=='o')o++;
		else if(cc[i][3-i]=='.')d++;
	}
		if(x==3){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
		if(x==2&&d==1){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
	x=0; o=0; d=0;
	for(int i=1; i<=3; i++){
		if(cc[i][3-i]=='x')x++;
		else if(cc[i][3-i]=='o')o++;
		else if(cc[i][3-i]=='.')d++;
	}
		if(x==3){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
		if(x==2&&d==1){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
	x=0; o=0; d=0;
	for(int i=0; i<3; i++){
		if(cc[i][i+1]=='x')x++;
		else if(cc[i][i+1]=='o')o++;
		else if(cc[i][i+1]=='.')d++;
	}
		if(x==3){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
		if(x==2&&d==1){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
	x=0; o=0; d=0;
	for(int i=1; i<=3; i++){
		if(cc[i][i-1]=='x')x++;
		else if(cc[i][i-1]=='o')o++;
		else if(cc[i][i-1]=='.')d++;
	}
		if(x==3){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
		if(x==2&&d==1){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
	x=0; o=0; d=0;
	for(int i=0; i<3; i++){
		if(cc[i][3-i-1]=='x')x++;
		else if(cc[i][3-i-1]=='o')o++;
		else if(cc[i][3-i-1]=='.')d++;
	}
		if(x==3){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
		if(x==2&&d==1){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
	x=0; o=0; d=0;
	for(int i=1; i<=3; i++){
		if(cc[i][3-i+1]=='x')x++;
		else if(cc[i][3-i+1]=='o')o++;
		else if(cc[i][3-i+1]=='.')d++;
	}
		if(x==3){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
		if(x==2&&d==1){
			cout<<"YES"<<endl;
			exit(0);
			return 0;
		}
	cout<<"NO"<<endl;

	return 0;
}
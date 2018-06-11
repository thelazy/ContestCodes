#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	d--; a--;
	cout<<20<<" "<<50<<endl;
	vector<vector<char> > v(10, vector<char>(50, 'D'));
	vector<vector<char> > v1(10, vector<char>(50, 'A'));
	//A
	for(int i=1; i<=48; i+=2){
		if(a==0)
			break;
		v[1][i] = 'A';
		a--;
	}
	for(int i=2; i<=48; i+=2){
		if(a==0)
			break;
		v[2][i] = 'A';
		a--;
	}
	for(int i=1; i<=48; i+=2){
		if(a==0)
			break;
		v[4][i] = 'A';
		a--;
	}
	for(int i=2; i<=48; i+=2){
		if(a==0)
			break;
		v[5][i] = 'A';
		a--;
	}
	for(int i=1; i<=48; i+=2){
		if(a==0)
			break;
		v[7][i] = 'A';
		a--;
	}
	for(int i=2; i<=48; i+=2){
		if(a==0)
			break;
		v[8][i] = 'A';
		a--;
	}


	//B
	for(int i=2; i<=48; i+=2){
		if(b==0)
			break;
		v[1][i] = 'B';
		b--;
	}
	for(int i=1; i<=48; i+=2){
		if(b==0)
			break;
		v[2][i] = 'B';
		b--;
	}
	for(int i=2; i<=48; i+=2){
		if(b==0)
			break;
		v[4][i] = 'B';
		b--;
	}
	for(int i=1; i<=48; i+=2){
		if(b==0)
			break;
		v[5][i] = 'B';
		b--;
	}
	for(int i=2; i<=48; i+=2){
		if(b==0)
			break;
		v[7][i] = 'B';
		b--;
	}
	for(int i=1; i<=48; i+=2){
		if(b==0)
			break;
		v[8][i] = 'B';
		b--;
	}

	//C
	for(int i=1; i<=48; i+=2){
		if(c==0)
			break;
		v1[1][i] = 'C';
		c--;
	}
	for(int i=2; i<=48; i+=2){
		if(c==0)
			break;
		v1[2][i] = 'C';
		c--;
	}
	for(int i=1; i<=48; i+=2){
		if(c==0)
			break;
		v1[4][i] = 'C';
		c--;
	}
	for(int i=2; i<=48; i+=2){
		if(c==0)
			break;
		v1[5][i] = 'C';
		c--;
	}
	for(int i=1; i<=48; i+=2){
		if(c==0)
			break;
		v1[7][i] = 'C';
		c--;
	}
	for(int i=2; i<=48; i+=2){
		if(c==0)
			break;
		v1[8][i] = 'C';
		c--;
	}

	//D
	for(int i=2; i<=48; i+=2){
		if(d==0)
			break;
		v1[1][i] = 'D';
		d--;
	}
	for(int i=1; i<=48; i+=2){
		if(d==0)
			break;
		v1[2][i] = 'D';
		d--;
	}
	for(int i=2; i<=48; i+=2){
		if(d==0)
			break;
		v1[4][i] = 'D';
		d--;
	}
	for(int i=1; i<=48; i+=2){
		if(d==0)
			break;
		v1[5][i] = 'D';
		d--;
	}
	for(int i=2; i<=48; i+=2){
		if(d==0)
			break;
		v1[7][i] = 'D';
		d--;
	}
	for(int i=1; i<=48; i+=2){
		if(d==0)
			break;
		v1[8][i] = 'D';
		d--;
	}


	for(int i=0; i<10; i++){
		for(int j=0; j<50; j++){
			cout<<v[i][j];
		}
		cout<<endl;
	}
	for(int i=0; i<10; i++){
		for(int j=0; j<50; j++){
			cout<<v1[i][j];
		}
		cout<<endl;
	}
	return 0;
}
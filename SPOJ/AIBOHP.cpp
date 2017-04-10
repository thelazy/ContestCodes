#include <bits/stdc++.h>

using namespace std;
string a, b;
char tempC;
long long i, Sa, Sb, j;
int cc[10000][10000];

int main(){
	long long t;
	cin>>t;
	while(t--){
		cin>>a;
		b = a;
		Sa = a.length();
		Sb = Sa;
		for(i=0; i<Sa/2; i++){
			tempC = b[i];
			b[i] = b[Sa-1-i];
			b[Sa-1-i] = tempC;
		}
		for(i=0; i<=Sa; i++){
			for(j=0; j<=Sb; j++){
				if(i==0||j==0)
				cc[i][j]=0;
				else{
					cc[i][j]=max(cc[i-1][j], cc[i][j-1]);
					if(a[i-1]==b[j-1])
						cc[i][j] = max(cc[i][j], cc[i-1][j-1]+1);
				}
			}
		}
		cout<<Sa-cc[Sa][Sb]<<endl;
	}
	return 0;
}
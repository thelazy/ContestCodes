#include <bits/stdc++.h>

using namespace std;

int main(){
	string a, b;
	char lcs[1000];
	cin>>a>>b;
	int Sa = a.length(), Sb = b.length(), i, j, pre=-1, ind=0, preM=0;
	int cc[Sa+1][Sb+1];
	for(i=0; i<=Sa; i++){
		for(j=0; j<=Sb; j++){
			if(i==0||j==0)
				cc[i][j]=0;
			else{
				cc[i][j]=max(cc[i-1][j], cc[i][j-1]);
				if(a[i-1]==b[j-1]){
					cc[i][j] = max(cc[i][j], cc[i-1][j-1]+1);
					if((i-1)!=pre && cc[i][j]>preM){
						lcs[ind++]=a[i-1];
						pre=i-1;
						preM = cc[i][j];
					}
				}
			}
		}
	}
	lcs[ind]='\0';
	cout<<lcs<<endl;
	return 0;
}
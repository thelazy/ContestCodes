#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, k, a, b, temp1, temp2, temp;
	cin>>n>>k>>a>>b;
	vector<char> tpPrint;
	char aa, bb;
	if(a>b){
		aa='G'; bb='B';
	}
	else{
		temp=a;a=b;b=temp;
		aa='B'; bb='G';
	}
	temp1 = a/(b+1);
	if(a%(b+1)!=0)
		temp2=temp1+1;
	else
		temp2 = temp1;
	if(temp2>k){
		cout<<"NO"<<endl;
		return 0;
	}
	if(a%(b+1)==0){
		for(int i=0; i<=b; i++){
			for(int j=0;j<temp1; j++){
				tpPrint.push_back(aa);
			}
			tpPrint.push_back(bb);
		}
	}
	else{
		long long tt = a%(b+1);
		for(int i=0; i<tt; i++){
			for(int j=0; j<temp2; j++){
				tpPrint.push_back(aa);
			}
			tpPrint.push_back(bb);
		}
		for(int i=0; i<=b-tt; i++){
			for(int j=0; j<temp1; j++){
				tpPrint.push_back(aa);
			}
			tpPrint.push_back(bb);
		}
	}
	for(int i=0; i<tpPrint.size()-1; i++)
		cout<<tpPrint[i];
	cout<<endl;
	return 0;
}
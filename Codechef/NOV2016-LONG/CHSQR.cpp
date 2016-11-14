#include <bits/stdc++.h>

using namespace std;

int main(){
	long long t, k, temp, lastTemp;
	cin>>t;
	while(t--){
		cin>>k;
		temp = (k+1)/2+1;
		//cout<<"Temp "<<temp<<endl;
		if(k==1)
			cout<<1<<endl;
		else{
			for(int i=0; i<k; i++){
				for(int j=0; j<k; j++){
					cout<<temp<<" ";
					lastTemp = temp;
					temp = (temp+1)%(k+1);
					if(temp==0)
						temp=1;

				}
				temp = lastTemp;
				cout<<endl;
			}
		}
	}
	return 0;
}
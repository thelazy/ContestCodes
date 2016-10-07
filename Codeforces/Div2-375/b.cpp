#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int len, no=0, lar=0, maxw=0;
	cin>>len;
	char arr[len+1];
	cin>>arr;
	for(int i=0; i<len;){
		while(arr[i]=='_'){
			i++;
		}
		if(isalpha(arr[i])){
			lar = 0;
			while(isalpha(arr[i])){
				//cout<<arr[i];
				i++;lar++;
			}
			//cout<<endl;
			if(lar>maxw)
				maxw = lar;
		}
		if(arr[i]=='('){
			i++;
			while(arr[i]!=')'){
				while(arr[i]=='_'){
					i++;
				}
				if(isalpha(arr[i])){
					while(isalpha(arr[i])){
						//cout<<arr[i];
						i++;
					}
					//cout<<endl;
					no++;
				}				
			}
			i++;		
		}	
	}
	cout<<maxw<<" "<<no<<endl;
	return 0;
}
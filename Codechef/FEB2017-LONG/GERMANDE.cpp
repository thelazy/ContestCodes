#include <bits/stdc++.h>

using namespace std;

int main(){
	long long t, n, o1, o2, temp, minS, minP;
	cin>>t;
	while(t--){
		cin>>o1>>o2;
		n = o1*o2+1;
		long long int arr[n];
		arr[0]=0;
		for(long long int i=1; i<n; i++){
			cin>>temp;
			arr[i] = arr[i-1]+temp;
		}
		minS = (o2/2)+1;
		minP = (o1/2)+1;
		long long int cntP=0, cntS=0, flag=0;
		for(long long int start=1; start<=o2; start++){
			long long int times = o1-1, ini=start; 
			cntP=0;
			while(times--){
				if((arr[ini+o2-1]-arr[ini-1])>=minS)
					cntP++;
				ini += o2;
			}
			if(((arr[start-1]-arr[0])+(arr[n-1]-arr[n-1-o2+start-1]))>=minS)
				cntP++;
			if(cntP>=minP){
				flag=1;
				break;
			}
		}
		cout<<flag<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	long long t, n, i, ii, j, k, l, max, temp;
	cin>>t;
	for(ii=1; ii<=t; ii++){
		cin>>n;
		long long arr[n][3];
		for(j=0; j<n; j++)
			cin>>arr[j][0]>>arr[j][1]>>arr[j][2];
		max = 0;
		for(i=0; i<n; i++)
			for(j=0; j<n; j++)
				for(k=0; k<n; k++){
						temp = 0;
						if((arr[i][0]+arr[j][1]+arr[k][2])<=10000)
						for(l=0; l<n; l++){
							if((arr[l][0]<=arr[i][0])&&(arr[l][1]<=arr[j][1])&&(arr[l][2]<=arr[k][2]))
								temp++;
						}
						if(temp>max){
							//cout<<arr[i][0]<<" "<<arr[j][1]<<" "<<arr[k][2]<<endl;
							max = temp;
						}
					}
		cout<<"Case #"<<ii<<": "<<max<<endl;
	}
	return 0;
} 
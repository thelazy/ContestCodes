#include <bits/stdc++.h>
using namespace std;

int cnt[200001];

int main(){
	int n;
	cin>>n;
	int arr[n], unq=0;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(cnt[arr[i]]==0)
			unq++;
		cnt[arr[i]]++;
	}
	cout<<(n-unq)<<endl;
	vector <bool> done(n+2, false);
	int st=1, ind=0;
	while(st<=(n)){
		if(!done[st]){
			if(st==arr[ind]){
				done[st]=true;
				st++;
				ind++;
			}
			else if(cnt[st]>0){
				st++;
			}
			else if(done[arr[ind]]){
				done[st]=true;
				arr[ind++]=st++;
			}
			else{
				if(cnt[arr[ind]]==1 || arr[ind]<=st){
					done[arr[ind]]=true;
					ind++;
				}
				else{
					cnt[arr[ind]]--;
					done[st]=true;
					arr[ind++]=st++;
				}
			}
		}
		else{
			st++;
		}
	}
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
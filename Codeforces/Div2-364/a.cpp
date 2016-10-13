#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; vector<int> arr[101];
	cin>>n; int sum=0, temp; 
	for(int i=1; i<=n; i++){
		cin>>temp;
		arr[temp].push_back(i);
		sum+=temp;
	}
	sum = sum*2/n; int ind=1;

	for(int i=1; i<101; i++){
		while(arr[i].size()>0){
			cout<<arr[i][0]<<" "<<arr[sum-i][arr[sum-i].size()-1]<<endl;
			arr[i].erase(arr[i].begin());
			arr[sum-i].erase(arr[sum-i].begin()+arr[sum-i].size()-1);		}
	}
	return 0;
}
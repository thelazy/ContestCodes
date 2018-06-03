#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, temp, cnt=0;
	cin>>n>>k;
	vector<int> v(101, -1);
	vector<bool> v1(101, false);
	for(int i=0; i<n; i++){
		cin>>temp;
		if(!v1[temp]){
			cnt++;
			v1[temp] = true;
			v[temp] = i+1;
		}
	}
	if(cnt<k){
		cout<<"NO\n";
		return 0;
	}
	else{
		cout<<"YES\n";
		int pcnt=0;
		for(int i=1; i<=100; i++){
			if(pcnt==k)
				break;
			if(v1[i]){
				cout<<v[i]<<" ";
				pcnt++;
			}
		}
	}
	cout<<endl;
	return 0;
}
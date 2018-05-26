#include<bits/stdc++.h>
using namespace std;
unordered_map<long long, int> mp;
int cnt;


void dfs(long long s){
	//cout<<s<<" ";
	cnt++;
	if(mp.find(s*2)!=mp.end()){
		dfs(s*2);
	}
	else if(s%3==0 && (mp.find((s/3))!=mp.end())){
		dfs(s/3);
	}
	return;
}

void printKaro(long long s){
	cout<<s<<" ";
	if(mp.find(s*2)!=mp.end()){
		printKaro(s*2);
	}
	else if(s%3==0 && (mp.find((s/3))!=mp.end())){
		printKaro(s/3);
	}
	return;	
}

int main(){
	long long n, ansInd;
	cin>>n;
	vector<long long> arr(n);
	for(int i=0; i<n; i++){
		cin>>arr[i];
		mp[arr[i]] = i;
	}
	for(int i=0; i<n; i++){
		cnt = 0;
		//cout<<arr[i]<<" : "<<endl;
		dfs(arr[i]);
		if(cnt == n){
			ansInd = i;
			//cout<<"HERE : "<<ansInd<<endl;
			break;
		}
		//cout<<endl;
	}
	//cout<<endl;
	//cout<<"----------------------------------\n";
	printKaro(arr[ansInd]);
	cout<<endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int arr[500][500];

int main(){
	int n, m;
	cin>>n>>m;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
			cin>>arr[i][j];
	int a, b;
	int val;
	vector <pair<int, int> > ans;
	int mini;
	while(1){
		val = INT_MAX;
		a = -1;
		b = -1;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				if(arr[i][j]!=0 && arr[i][j]<val){
					val = arr[i][j];
					a = i;
					b = j;
				}
			}
		}
		// cout<<val<<endl;
		// cout<<a<<" "<<b<<endl;
		if(val==INT_MAX){
			break;
		}
		if(m>=n){
		mini = INT_MAX;
		for(int i=1; i<=m; i++){
			if(arr[a][i]<mini)
				mini = arr[a][i];
		}
		if(mini==val){
			for(int i=0; i<val; i++)
				ans.push_back(make_pair(a, 0));
			for(int i=1; i<=m; i++)
				arr[a][i] -= val;
			continue;
		}
		mini = INT_MAX;
		for(int i=1; i<=n; i++){
			if(arr[i][b]<mini)
				mini = arr[i][b];
		}
		if(mini==val){
			for(int i=0; i<val; i++)
				ans.push_back(make_pair(b, 1));
			for(int i=1; i<=n; i++)
				arr[i][b] -= val;
			continue;
		}}
		else{
		mini = INT_MAX;
		for(int i=1; i<=n; i++){
			if(arr[i][b]<mini)
				mini = arr[i][b];
		}
		if(mini==val){
			for(int i=0; i<val; i++)
				ans.push_back(make_pair(b, 1));
			for(int i=1; i<=n; i++)
				arr[i][b] -= val;
			continue;
		}
		mini = INT_MAX;
		for(int i=1; i<=m; i++){
			if(arr[a][i]<mini)
				mini = arr[a][i];
		}
		if(mini==val){
			for(int i=0; i<val; i++)
				ans.push_back(make_pair(a, 0));
			for(int i=1; i<=m; i++)
				arr[a][i] -= val;
			continue;
		}		
		}
		cout<<-1<<endl;
		return 0;
	}
	cout<<ans.size()<<endl;
	for(int i=0; i<ans.size(); i++){
		if(ans[i].second==0){
			cout<<"row "<<ans[i].first<<endl;
		}
		else{
			cout<<"col "<<ans[i].first<<endl;
		}
	}
	return 0;
}
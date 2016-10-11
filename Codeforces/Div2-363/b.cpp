#include <bits/stdc++.h>
using namespace std;

pair <int, int> p1, p2;

int main(){
	int n, m, x=1000000, y=1000000, flag=1;
	cin>>n>>m;
	char arr[n][m];
	vector <pair<int, int> > q;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
			if(arr[i][j]=='*')
				q.push_back(make_pair(i, j));
		}
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++){
			flag=1;
			for(int k=0; k<q.size(); k++){
				if(q[k].first!=i && q[k].second!=j){
					flag=0; break;
				}
			}
			if(flag){
				cout<<"YES\n"<<i+1<<" "<<j+1<<endl; return 0;
			}
		}
		cout<<"NO"<<endl;
	return 0;
}
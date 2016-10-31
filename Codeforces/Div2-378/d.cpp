#include <bits/stdc++.h>
using namespace std;



int main(){
	long long n, a, b, c;
	cin>>n;
	long long arr[n+1][3];
	map <pair<long, long>, pair<long, long> > mapa;
	pair<long long, long long> ans, p1, p2;
	for(long long i=1; i<=n; i++){
		cin>>a>>b>>c; arr[i][0]=a; arr[i][1]=b; arr[i][2]=c; 
		if(mapa.find(make_pair(a, b))==mapa.end()){
			mapa[make_pair(a, b)]=make_pair(c,i);mapa[make_pair(b, a)]=make_pair(c,i);
		}
		else{
			if(c>mapa[make_pair(a, b)].first){
				mapa[make_pair(a, b)]=make_pair(c,i);mapa[make_pair(b, a)]=make_pair(c,i);
			}
		}

		if(mapa.find(make_pair(c, b))==mapa.end()){
			mapa[make_pair(c, b)]=make_pair(a,i);mapa[make_pair(b, c)]=make_pair(a,i);
		}
		else{
			if(a>mapa[make_pair(c, b)].first){
				mapa[make_pair(c, b)]=make_pair(a,i);mapa[make_pair(b, c)]=make_pair(a,i);
			}
		}

		if(mapa.find(make_pair(a, c))==mapa.end()){
			mapa[make_pair(a, c)]=make_pair(b,i);mapa[make_pair(c, a)]=make_pair(b,i);
		}
		else{
			if(b>mapa[make_pair(a, c)].first){
				mapa[make_pair(a, c)]=make_pair(b,i);mapa[make_pair(c, a)]=make_pair(b,i);
			}
		}

		// cout<<"REAL"<<endl;
		// p1 = mapa[make_pair(10, 8)];
		// cout<<p1.first<<" "<<p1.second<<endl;
		
	}
	long long dia=0;
	ans.first = 0; ans.second = 0;
	for(long long i=1; i<=n; i++){
		sort(arr[i], arr[i]+3);
		if(arr[i][0]>dia){
			dia = arr[i][0];
			ans.first=i; ans.second=0;
		}
		p2 = make_pair(arr[i][1], arr[i][2]);
		p1 = mapa[p2];
		if(p1.second!=i){
			if(arr[i][0]+p1.first>=arr[i][1]){
				if(arr[i][1]>dia){
					dia = arr[i][1];
					ans = make_pair(i, p1.second);
				}
			}
			else{
				if(arr[i][0]+p1.first>dia){
					dia = arr[i][0]+p1.first;
					ans = make_pair(i, p1.second);
				}
			}
		}
		//cout<<i<<endl<<ans.first<<" "<<ans.second<<endl;
	}
	// cout<<"REAL"<<endl;
	// p1 = mapa[make_pair(10, 8)];
	// cout<<p1.first<<" "<<p1.second<<endl;
	if(ans.second==0){
		cout<<1<<endl<<ans.first<<endl;
	}
	else{
		cout<<2<<endl<<ans.first<<" "<<ans.second<<endl;
	}
	return 0;
}
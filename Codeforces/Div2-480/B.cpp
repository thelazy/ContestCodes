#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n, k;
	cin>>n>>k;
	if(k>((n-2)*2)){
		k = (n-2)*2;
	}
	if(k%2==0){
		cout<<"YES\n";
		for(int i=0; i<n; i++)
			cout<<".";
		cout<<endl<<".";
		for(int i=0; i<k/2; i++)
			cout<<"#";
		for(int i=0; i<(n-((k/2)+1)); i++)
			cout<<".";
		cout<<endl<<".";
		for(int i=0; i<k/2; i++)
			cout<<"#";
		for(int i=0; i<(n-((k/2)+1)); i++)
			cout<<".";
		cout<<endl;
		for(int i=0; i<n; i++)
			cout<<".";
		cout<<endl;		
	}
	else{
		cout<<"YES\n";
		if(k<=(n-2)){
			for(int i=0; i<n; i++)
				cout<<".";
			cout<<endl;
			for(int i=0; i<((n-k)/2); i++)
				cout<<".";
			for(int i=0; i<k; i++)
				cout<<"#";
			for(int i=0; i<((n-k)/2); i++)
				cout<<".";
			cout<<endl;
			for(int i=0; i<n; i++)
				cout<<".";
			cout<<endl;
			for(int i=0; i<n; i++)
				cout<<".";
			cout<<endl;
		}
		else{
			for(int i=0; i<n; i++)
				cout<<".";
			cout<<endl;
			cout<<".";
			for(int i=0; i<(n-2); i++)
				cout<<"#";
			cout<<"."<<endl;
			cout<<".";
			for(int i=0; i<(k-(n-2)-1); i++){
				cout<<"#";
			}
			for(int i=0; i<(2*n-k-4); i++)
				cout<<".";
			cout<<"#."<<endl;
			for(int i=0; i<n; i++)
				cout<<".";
			cout<<endl;
		}
	}
	return 0;
}
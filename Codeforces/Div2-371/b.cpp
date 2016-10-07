#include <bits/stdc++.h>

using namespace std;
int main(){
	long long n; int j;
	cin>>n;
	long long arr[n]; int flag=0, typec=1;
	for(long long i=0; i<n; i++){
		cin>>arr[i];
	}
	vector<long long> type;
	for(long long i=0; i<n; i++){
		flag=0;
		for(int j=0; j<type.size(); j++)
			if(type[j]==arr[i]){
				flag=1; break;
			}
		if(!flag)
			type.push_back(arr[i]);
		if(type.size()>3)
			break;
	}
	typec = type.size();
	if(typec>3)
		cout<<"NO"<<endl;
	else{
		sort(type.begin(), type.end());
		if(typec==1)
			cout<<"YES"<<endl;
		else{
			if(typec==2){
				cout<<"YES"<<endl;
			}
			else{
				if(2*type[1]==type[0]+type[2])
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}
		}
		
	}
	return 0;
}
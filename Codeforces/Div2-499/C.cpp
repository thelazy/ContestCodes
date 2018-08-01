#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
	long long n;
	double m, temp;
	cin>>n;
	cin>>m;
	vector<double> a(n);
	vector<double> b(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i]==1){
			cout<<-1<<endl;
			return 0;
		}
	}
	for(int i=0; i<n; i++){
		cin>>b[i];
		if(b[i]==1){
			cout<<-1<<endl;
			return 0;
		}
	}
	double ans = m;

	if((ans-m)>((double)1e9)){
		cout<<-1<<endl;
		return 0;
	}
	//cout << fixed << setprecision(6)<<
	(temp = (ans/(b[0]-1)));
	ans += temp;
	if((ans-m)>((double)1e9)){
		cout<<-1<<endl;
		return 0;
	}
	for(int i=n-1; i>0; i--){
		temp = (ans/(a[i]-1));
		ans += temp;
		if((ans-m)>((double)1e9)){
		cout<<-1<<endl;
		return 0;
	}
		temp = (ans/(b[i]-1));
		ans += temp;
		if((ans-m)>((double)1e9)){
		cout<<-1<<endl;
		return 0;
	}
	}
	(temp = (ans/(a[0]-1)));
	ans += temp;
	cout << fixed << setprecision(10)<<(ans-m)<<endl;
	return 0;
}
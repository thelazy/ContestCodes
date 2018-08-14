#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string baato(int n){
	if(n<1){
		return "";
	}
	if(n==1){
		return "2(0)";
	}
	if(n==2){
		return "2";
	}
	vector<int> v;
	int k=0;
	while(n){
		if(n%2){
			v.push_back(k);
		}
		n /= 2;
		k++;
	}
	string ret = "";
	for(int i=v.size()-1; i>=0; i--){
		if(v[i]==0){
			ret += baato(1);
		}
		else if(v[i]==1){
			ret += baato(2);
		}
		else{
			ret += "2("+baato(v[i])+")";
		}
		if(i!=0){
			ret += "+";
		}
	}
	return ret;
}

int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<n<<"=";
		cout<<baato(n)<<endl;
	}
	return 0;
}
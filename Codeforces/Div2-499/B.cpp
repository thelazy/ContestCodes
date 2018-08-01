#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n, m, temp;
	cin>>n>>m;
	std::vector<int> v(101, 0);
	for(int i=0; i<m; i++){
		cin>>temp;
		v[temp]++;
	}
	std::vector<int> v1;
	for(int i=1; i<=100; i++){
		v1.push_back(v[i]);
	}
	sort(v1.begin(), v1.end());
	for(int i=100; i>=1; i--){
		temp = 0;
		for(int j=99; j>=0; j--){
			temp += (v1[j]/i);
		}
		if(temp>=n){
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<0<<endl;
	return 0;
}
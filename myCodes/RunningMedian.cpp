#include <bits/stdc++.h>
using namespace std;

void runM(vector<int> &arr){
	priority_queue<int> maxi;
	priority_queue<int> mini;
	for(int i=1; i<=arr.size(); i++){
		cout<<"ind "<<i<<endl;
		if(mini.size()==0 || (-mini.top())<=arr[i-1]){
			mini.push(-arr[i-1]);
		}
		else{
			maxi.push(arr[i-1]);
		}
		if(i%2==1){
			if(mini.size()<maxi.size()){
				mini.push(-maxi.top());
				maxi.pop();
			}
			cout<<-mini.top()<<endl;
		}
		else{
			if(mini.size()>maxi.size()){
				maxi.push(-mini.top());
				mini.pop();
			}
			cout<<((maxi.top()-mini.top())/2)<<endl;
		}

	}

}
int main(){
	vector<int> v = {1, 3, 4};
	runM(v);
	return 0;
}
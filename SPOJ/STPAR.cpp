#include <bits/stdc++.h>
using namespace std;

int main(){
	while(true){
	queue < long long int > a;
	stack < long long int > b;
	long long n, temp, i;
	cin>>n;
	if(n==0)
		break;
	for(i=0; i<n; i++){
		cin>>temp;
		a.push(temp);
	}
	temp=1;
	int flag=1;
	while(temp<=n){
		//cout<<"i\n";
		if(!a.empty()){
			if(a.front()==temp){
				//cout<<"pop from a\n";
				a.pop();
				temp++;
			}
			else if(!b.empty()&&b.top()==temp){
				//cout<<"pop from b\n";
				b.pop();
				temp++;
			}
			else{
				while(!a.empty() && a.front()!=temp){
					//cout<<"pushing "<<a.front()<<" on stack\n";
					b.push(a.front());
					a.pop();
				}
			}
		}
		else{
			if(b.top()==temp){
				//cout<<"pop from b\n";
				b.pop();
				temp++;
			}
			else{
				cout<<"no\n";
				flag=0;
				break;
			}
		}
	}
	if(flag)
		cout<<"yes\n";
	}
	return 0;
}
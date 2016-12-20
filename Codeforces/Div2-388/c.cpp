#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, i; string s;
	cin>>n; cin>>s;
	queue<long long> dq;
	queue<long long> rq;
	for(i=0; i<n; i++){
		if(s[i]=='D')
			dq.push(i);
		else
			rq.push(i);
	}
	long long q1, q2;
	while(dq.size()>0&&rq.size()>0){
		q1 = dq.front(); q2 = rq.front();
		dq.pop(); rq.pop();
		if(q1<q2)
			dq.push(q1+n);
		else
			rq.push(q2+n);
	}
	if(dq.size()>0)
		cout<<"D"<<endl;
	else
		cout<<"R"<<endl;
	return 0;
}
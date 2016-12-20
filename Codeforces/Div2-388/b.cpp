#include <bits/stdc++.h>

using namespace std;

long long x, y, flag=0;

void fun(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3){
	long long temp = (x1-x3)*(y2-y3)-(x2-x3)*(y1-y3);
	x = (((x1-x3)*(x1*(y2-y3)-y1*(x2-x3)))-((x2-x3)*(x2*(y1-y3)-y2*(x1-x3))));
	y = (((y1-y3)*(x1*(y2-y3)-y1*(x2-x3)))-((y2-y3)*(x2*(y1-y3)-y2*(x1-x3))));
	if(x%temp==0){
		x = x/temp;
	}
	else{
		flag=1;
		return;
	}
	if(y%temp==0){
		y = y/temp;
	}
	else{
		flag=1;
		return;
	}
}

int main(){
	long long x1, x2, x3, y1, y2, y3, cnt=0, i;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	vector<long long> toP;
	flag=0;
	fun(x1, y1, x2, y2, x3, y3);
	if(!flag){
		cnt++;toP.push_back(x);toP.push_back(y);
	}
	flag=0;
	fun(x1, y1, x3, y3, x2, y2);
	if(!flag){
		cnt++;toP.push_back(x);toP.push_back(y);
	}
	flag=0;
	fun(x3, y3, x2, y2, x1, y1);
	if(!flag){
		cnt++;toP.push_back(x);toP.push_back(y);
	}
	cout<<cnt<<endl;
	for(i=0; i<cnt; i++){
		cout<<toP[2*i]<<" "<<toP[2*i+1]<<endl;
	}
	return 0;
}
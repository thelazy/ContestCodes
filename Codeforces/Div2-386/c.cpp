#include <bits/stdc++.h>
using namespace std;

int main(){
	long long s, x1, x2, t1, t2, p, d;
	long long dis, ans1;
	cin>>s>>x1>>x2>>t1>>t2>>p;
	cin>>d;
	ans1 = abs(x1-x2)*t2;
	int t=0;
	if(t1<t2){
		if(x1>x2){
			if(d==1){
				dis = abs(s-p)+abs(s-x2);
				if(dis*t1<ans1)
					cout<<dis*t1<<endl;
				else
					cout<<ans1<<endl;
			}
			else{
				if(p>=x1){
					dis = abs(p-x2);
					if(dis*t1<ans1)
						cout<<dis*t1<<endl;
					else
						cout<<ans1<<endl;
				}
				else{
					dis = abs(p)+s+abs(s-x2);
					if(dis*t1<ans1)
						cout<<dis*t1<<endl;
					else
						cout<<ans1<<endl;
				}
			}
		}
		else{
			if(d==-1){
				dis = abs(p-0)+x2;
				if(dis*t1<ans1)
					cout<<dis*t1<<endl;
				else
					cout<<ans1<<endl;
			}
			else{
				if(p<=x1){
					dis=x2-p;
					if(dis*t1<ans1)
						cout<<dis*t1<<endl;
					else
						cout<<ans1<<endl;
				}
				else{
					dis = abs(s-p)+s+abs(x2);
					if(dis*t1<ans1)
						cout<<dis*t1<<endl;
					else
						cout<<ans1<<endl;
				}
			}
		}
	}
	else
		cout<<ans1<<endl;
	return 0;
}
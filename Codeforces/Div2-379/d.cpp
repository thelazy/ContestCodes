#include <bits/stdc++.h>

using namespace std;

pair<long long, pair<long long, char> > p1;

int main(){
	long long n, x, y, a, b, type, i;
	char c;
	scanf("%I64d", &n);
	scanf("%I64d %I64d", &x, &y);
	vector <pair<long long, pair<long long, char> > >d0; d0.push_back(make_pair(0, make_pair(0, 'a')));
	vector <pair<long long, pair<long long, char> > >d1; d1.push_back(make_pair(0, make_pair(0, 'a')));
	vector <pair<long long, pair<long long, char> > >d2; d2.push_back(make_pair(0, make_pair(0, 'a')));
	vector <pair<long long, pair<long long, char> > >d3; d3.push_back(make_pair(0, make_pair(0, 'a')));
	for(i=0; i<n; i++){
		cin>>c;
		scanf("%I64d %I64d", &a, &b);
		a = a-x; b = b-y;
		if(b==0)
			d0.push_back(make_pair(a, make_pair(b, c)));
		else
			if(a==0)
				d1.push_back(make_pair(a, make_pair(b, c)));
			else if(abs(a)==abs(b)){
				if(a*b>0)
					d2.push_back(make_pair(a, make_pair(b, c)));
				else
					d3.push_back(make_pair(a, make_pair(b, c)));
				}
	}
	sort(d0.begin(), d0.end());
	sort(d1.begin(), d1.end());
	sort(d2.begin(), d2.end());
	sort(d3.begin(), d3.end());

	int flag=0;
	if(d0.size()>1&&flag==0){
		for(int i=0; i<d0.size(); i++){
			p1 = d0[i];
			if(p1.second.second=='a'){
				if(i>0)
					if(d0[i-1].second.second!='B')
						flag=1;
				if(i<d0.size()-1)
					if(d0[i+1].second.second!='B')
						flag=1;
			}
		}
	}
	if(d1.size()>1&&flag==0){
		for(int i=0; i<d1.size(); i++){
			p1 = d1[i];
			if(p1.second.second=='a'){
				if(i>0)
					if(d1[i-1].second.second!='B')
						flag=1;
				if(i<d1.size()-1)
					if(d1[i+1].second.second!='B')
						flag=1;
				break;
			}
		}
	}
	if(d2.size()>1&&flag==0){
		for(int i=0; i<d2.size(); i++){
			p1 = d2[i];
			if(p1.second.second=='a'){
				if(i>0)
					if(d2[i-1].second.second!='R')
						flag=1;
				if(i<d2.size()-1)
					if(d2[i+1].second.second!='R')
						flag=1;
				break;
			}
		}
	}
	if(d3.size()>1&&flag==0){
		for(int i=0; i<d3.size(); i++){
			p1 = d3[i];
			if(p1.second.second=='a'){
				if(i>0)
					if(d3[i-1].second.second!='R')
						flag=1;
				if(i<d3.size()-1)
					if(d3[i+1].second.second!='R')
						flag=1;
			}
		}
	}
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
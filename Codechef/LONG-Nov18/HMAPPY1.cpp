#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n, q, k;
	cin>>n>>q>>k;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	string qq;
	cin>>qq;
	vector<pair<long long, long long> > p_arr;
	p_arr.push_back(make_pair(arr[0], 1));
	int cnt=0;
	for (int i = 1; i < n; ++i){
		if(p_arr[cnt].first==arr[i]){
			p_arr[cnt].second++;
		}
		else{
			p_arr.push_back(make_pair(arr[i], 1));
			cnt++;
		}
	}
	vector<long long> vec1;
	for (int i = 0; i < p_arr.size(); ++i){
		if(p_arr[i].first==1){
			vec1.push_back(p_arr[i].second);
		}
	}
	long long dis=0;
	if(vec1.size()>=2 && p_arr[0].first==1 && p_arr[p_arr.size()-1].first==1){
		dis = p_arr[0].second;
		p_arr.erase(p_arr.begin());
		p_arr[p_arr.size()-1].second += dis;
	}
	vec1.clear();
	for (int i = 0; i < p_arr.size(); ++i){
		if(p_arr[i].first==1){
			vec1.push_back(p_arr[i].second);
		}
	}
	sort(vec1.begin(), vec1.end());
	long long m1=0;
	long long m2=0;
	if(vec1.size()>=2){
		m1 = vec1[vec1.size()-1];
		m2 = vec1[vec1.size()-2];
	}
	else if(vec1.size()==1){
		m1 = vec1[0];
	}
	if(p_arr.size()==1){
		long long ans;
		if(p_arr[0].first==1){
			ans = n;
		}
		else{
			ans = 0;
		}
		for(int i=0; i<qq.length(); i++){
			if(qq[i]=='?')
				cout<<min(ans, k)<<endl;
		}
		return 0;
	}
	long long ind = p_arr.size()-1;
	long long p_arr_size = p_arr.size();

	// cout<<m1<<" "<<m2<<endl;

	// for(int i=0; i<p_arr_size; i++){
	// 	cout<<p_arr[i].first<<" : "<<p_arr[i].second<<endl;
	// }
	// cout<<"--------------------"<<endl;
	for(int i=0; i<qq.length(); i++){
		if(qq[i]=='!'){
			if(dis==p_arr[ind].second){
				ind--;
				dis=1;
				ind = (ind+p_arr_size)%p_arr_size;
			}
			else
				dis++;
		}
		else{
			if(p_arr[ind].first==0){
				cout<<min(m1, k)<<endl;
			}
			else{
				if(p_arr[ind].second==m1){
					cout<<min(max(max(dis, p_arr[ind].second-dis), m2), k)<<endl;
				}
				else{
					cout<<min(m1, k)<<endl;
				}
			}
		}
	}

	return 0;
}

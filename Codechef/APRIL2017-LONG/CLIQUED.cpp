#include <bits/stdc++.h>

using namespace std;

vector <pair<long long, long long> >graph[100001];
bool reached[100001];
long long int _distance[100001];
long long t, n, k, x, m, s, w, a, b, mini, mnode;
pair <long long, long long > p1, p2, p3;
void dijkstra(){
	priority_queue < pair<long long int, long long int> > pque;
	long long int min_dis;
	p1.first = 0;
	p1.second = s;
	pque.push(p1);
	while(!pque.empty()){
		p1 = pque.top();
		pque.pop();
		if(_distance[p1.second]==-1)
		{
			_distance[p1.second]=-p1.first;
			min_dis = -p1.first;
			for(int i=0; i<graph[p1.second].size(); i++){
				p2 = graph[p1.second][i];
				if(_distance[p2.first]==-1){
					p3.first = -(min_dis + p2.second);
					p3.second = p2.first;
					pque.push(p3);
				}
			}
		}

	}
}

int main(){
	scanf("%lld", &t);
	while(t--){
		scanf("%lld %lld %lld %lld %lld", &n, &k, &x, &m, &s);
		for(int i=1; i<=n; i++)
			graph[i].clear();
		for(int i=0; i<m; i++){
			scanf("%d %d %lld", &a, &b, &w);
			graph[a].push_back(make_pair(b, w));
			graph[b].push_back(make_pair(a, w));
		}
		if(s<=k){
			for(int i=1; i<=k; i++){
				if(i!=s)
					graph[s].push_back(make_pair(i, x));
			}
		}
		for(int i=1; i<=n; i++)
			_distance[i]=-1;
		dijkstra();
		if(s>k){
			mini = 1e18;
			for(int i=1; i<=k; i++){
				if(_distance[i]!=-1 && _distance[i]<mini){
					mini = _distance[i];
					mnode = i;
				}
			}
			mini += x;
			for(int i=1; i<=k; i++){
				if(_distance[i]==-1 || _distance[i]>mini){
					graph[mnode].push_back(make_pair(i, x));
				}
			}
			for(int i=1; i<=n; i++){
				_distance[i]=-1;
			}
			dijkstra();
		}
		for(int i=1; i<=n; i++)
			printf("%lld ", _distance[i]);
		printf("\n");
	}
	return 0;
}
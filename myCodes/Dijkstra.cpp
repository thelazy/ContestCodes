#include <bits/stdc++.h>

using namespace std;

vector <pair < int, int > > graph[100000];
int reached[100000];
int _distance[100000]={-1};
pair <int, int> p1, p2, p3;

void dijkstra(int source){
	priority_queue < pair<int, int> > pque;
	int min_dis;
	p1.first = 0;
	p1.second = source;
	pque.push(p1);
	while(!pque.empty()){
		p1 = pque.top();
		pque.pop();
		if(_distance[p1.second]==-1)
		{
			cout<<p1.second<<"->"<<-p1.first<<endl;
			_distance[p1.second]=-p1.first;
			min_dis = -p1.first;
			for(int i=0; i<graph[p1.second].size(); i++){
				p2 = graph[p1.second][i];
				if(_distance[p2.first]==-1){
					p3.first = -(min_dis+p2.second);
					p3.second = p2.first;
					pque.push(p3);
				}
			}
		}

	}
}

int main(){
	int nodes, edges, source;
	int a, b;
	cin>>nodes>>edges;
	for(int i=0; i<edges; i++){
		cin>>a>>b;
		p1.second = 1;
		p1.first = b;
		graph[a].push_back(p1);
		p1.first = a;
		graph[b].push_back(p1);
	}
	cin>>source;
	for(int i=0; i<nodes; i++)
		_distance[i]=-1;
	dijkstra(source);
	for(int i=0; i<nodes; i++)
		cout<<_distance[i]<<" ";
	cout<<endl;
}
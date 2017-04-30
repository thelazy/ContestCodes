#include <bits/stdc++.h>

using namespace std;

long long int n, m, k, u, v, weight, ans, cnt;	
priority_queue< pair<long long int, pair<long long int, long long int> > >q;
pair<long long int, long long int> tpair;
pair<long long int, pair<long long int, long long int> > tpair2;
long long int Arr[112345], size[112345];

long long int root (long long int i)
{
    while(Arr[ i ] != i)
    {
        Arr[ i ] = Arr[ Arr[ i ] ] ; 
        i = Arr[ i ]; 
    }
    return i;
}

bool find(long long int A, long long int B)
{
    if( root(A)==root( B) ) 
    return true;
    else
    return false;
}

void _union(long long int A, long long int B)
{
    long long int root_A = root(A);
    long long int root_B = root(B);
    if(size[root_A] < size[root_B ])
    {
        Arr[ root_A ] = Arr[root_B];
        size[root_B] += size[root_A];
    }
    else
    {
        Arr[ root_B ] = Arr[root_A];
        size[root_A] += size[root_B];
    }

}

void initialize(long long int N)
{
    for(long long int i = 0;i<N;i++)
    {
        Arr[ i ] = i ;
        size[ i ] = 1;
    }
}


int main() {
	cin >> n >> m >> k;
	ans=0;
	cnt = n-k;
	initialize(n);
	for(long long int i = 0; i < m; i += 1) {
		cin >> u >> v >> weight;
		tpair.first = u;
		tpair.second = v;
		tpair2.second = tpair;
		tpair2.first = -weight;
		q.push(tpair2);
	}
	while(!q.empty()&&cnt) {
		tpair2 = q.top();
		q.pop();
		tpair = tpair2.second;
		if(!find(tpair.first, tpair.second)){
			_union(tpair.first, tpair.second);
			ans = ans-tpair2.first;
			cnt--;
		}
		
	}
	
	cout <<ans<< endl;
	return 0;
}
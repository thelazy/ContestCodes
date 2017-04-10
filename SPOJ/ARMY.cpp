#include <bits/stdc++.h>
using namespace std;

int main(){
	long long t, u, v, i, temp;
	scanf("%lld", &t);
	while(t--){
		priority_queue < int > a, b;
		scanf("%lld %lld", &u, &v);
		for(i=0; i<u; i++){
			scanf("%lld", &temp);
			a.push(-temp);
		}
		for(i=0; i<v; i++){
			scanf("%lld", &temp);
			b.push(-temp);
		}
		while(!(a.empty()||b.empty())){
			if(a.top()<=b.top()){
				b.pop();
			}
			else
				a.pop();
		}
		if(b.empty())
			printf("Godzilla\n");
		else
			printf("MechaGodzilla\n");
	}
	return 0;
}
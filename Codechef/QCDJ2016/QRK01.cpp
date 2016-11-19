#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, q, type, a, b;
	char c;
	scanf("%lld %lld", &n, &q);
	char arr[n+1];
	int cnt[25], sub=(int)('a');
	scanf("%s", arr);
	for(long long i=0; i<q; i++){
		scanf("%lld", &type);
		if(type==1)
			scanf("%lld %c", &a, &c);
		else
			scanf("%lld %lld", &a, &b);
		if(type==1)
			arr[a-1]=c;
		else{
			for(int i=0; i<=25; i++)
				cnt[i]=0;
			for(int i=a-1; i<=b-1; i++)
				cnt[(int)(arr[i])-sub]++;
			int odd=0;
			for(int i=0; i<=25; i++)
				if(cnt[i]%2!=0)
					odd++;
			if(odd>1)
				printf("no\n");
			else
				printf("yes\n");
		}
	}
	return 0;
}
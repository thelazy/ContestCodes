#include <bits/stdc++.h>
using namespace std;
long long mod = 1000000007;
long long pp[100011], qq[100011], rr[100011], p, q, r, t, i, j, k, ans;
long long ps[100011], rs[100011];

int main(){
	scanf("%lld", &t);
	while(t--){
		ans = 0;
		scanf("%lld %lld %lld", &p, &q, &r);
		pp[0]=0;qq[0]=0;rr[0]=0;
		for(i=1; i<=p; i++)
			scanf("%lld", &pp[i]);
		for(i=1; i<=q; i++)
			scanf("%lld", &qq[i]);
		for(i=1; i<=r; i++)
			scanf("%lld", &rr[i]);
		sort(pp+1, pp+p+1);
		sort(qq+1, qq+q+1);
		sort(rr+1, rr+r+1);
		ps[0]=0; rs[0]=0;
		for(i=1; i<=p; i++){
			ps[i]=(pp[i]+ps[i-1])%mod;

		}
		for(i=1; i<=r; i++){
			rs[i]=(rr[i]+rs[i-1])%mod;
		}
		j=1; k=1;
		for(i=1; i<=q; i++){
			for(j; j<=p; j++){
				if(pp[j]>qq[i])
					break;
			}
			for(k; k<=r; k++){
				if(rr[k]>qq[i])
					break;
			}
			ans += (((((j-1)*(k-1))%mod)*((qq[i]*qq[i])%mod))%mod);
			ans = ans%mod;
			ans += ((qq[i]*((((k-1)*ps[j-1])%mod)+(((j-1)*rs[k-1])%mod)))%mod);
			ans = ans%mod;
			ans += ((ps[j-1]*rs[k-1])%mod);
			ans = ans%mod;
		}
		printf("%lld\n", ans);
	}
	return 0;
}
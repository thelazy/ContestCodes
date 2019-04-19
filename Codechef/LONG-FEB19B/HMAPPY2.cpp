#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

unsigned long long int gcd(unsigned long long int a, unsigned long long int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

int main(){
	unsigned long long t, n, a, b, k, gcdOfAB, noOfSolve;
	cin>>t;
	while(t--){
		cin>>n>>a>>b>>k;
		gcdOfAB = gcd(a, b);
		noOfSolve = (n/a) + (n/b) - 2*(n/(gcdOfAB*(a/gcdOfAB)*(b/gcdOfAB)));
		if(noOfSolve>=k){
			cout<<"Win\n";
		}
		else{
			cout<<"Lose\n";
		}
	}
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, m, k, x, y, mini, maxi, apni, temp, rem;
	cin>>n>>m>>k>>x>>y;
	if(n>2){
		maxi = k/((n-1)*m);
		mini = maxi/2;
		rem = k % ((n-1)*m);;
		apni = maxi;
		if(maxi%2==0&&(x==1||x==n))
			apni = mini;
		else if(maxi%2!=0 && x==1)
			apni = mini+1;
		else if(maxi%2!=0 && x==n)
			apni = mini;
		if(rem>0){
			if(maxi%2==0){
				int temp3 = (x-1)*m+y;
				if(rem>m)
					maxi++;
				if(rem>=temp3)
					apni++;
				if(!maxi)
					maxi=1;
			}
			else{
				if(rem>=m){
					mini++;
				}
				if(rem>m){
					maxi++;
				}
				int temp1 = (n-x)*m+y;
				if(rem>=temp1)
					apni++;
				if(!maxi)
					maxi=1;
			}
		}
	}
	else if(n==1){
		mini = k/m;
		rem = k%m;
		maxi = mini;
		if(rem>0){
			maxi++;
		}
		apni = mini;
		if(y<=rem)
			apni = maxi;
	}
	else if(n==2){
		mini = k/(2*m);
		rem = k%(2*m);
		maxi = mini;
		if(rem>0){
			maxi++;
		}
		apni = mini;
		if(((x-1)*m+y)<=rem)
			apni = maxi;
	}
	cout<<maxi<<" "<<mini<<" "<<apni<<endl;
	return 0;
}
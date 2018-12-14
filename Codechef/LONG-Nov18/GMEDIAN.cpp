#include <bits/stdc++.h>

using namespace std;

vector < vector < long long > > NCR(1001, vector<long long>(1001, 1));
long long MOD = 1e9+7;

void calNCR(){
	for(int i=0; i<=1000; i++){
		for(int j=1; j<=1000; j++){
			if(j>i)
				NCR[i][j] = 0;
			else	
				NCR[i][j] = (NCR[i-1][j] + NCR[i-1][j-1])%MOD;
		}
	}
}

long long pow2(long long n){
	if(n>0){
		long long temp = pow2(n/2);
		temp = ((temp*temp)%MOD);
		if(n%2){
			return ((temp*2)%MOD);
		}	
		else{
			return temp;
		}
	}
	return 1;
}

long long modu(long long x){
	if(x>=0)
		return (x%MOD);
	return ((x+MOD)%MOD);
}

int main(){
	calNCR();
	long long t, n, ans, temp, x, y1, y2, tempCal, tt;
	vector<long long> arr;
	int lastOcc[5000];
	cin>>t;
	while(t--){
		cin>>n;
		arr.clear();
		ans = pow2(n-1);
		for(int i=0; i<n; i++){
			cin>>temp;
			arr.push_back(temp);
		}
		sort(arr.begin(), arr.end());
		for(int i=0; i<n; i++){
			lastOcc[arr[i]]=i;
		}
		for(int i=0; i<n; i++){
			x = i-0;
			y1 = n-i-1;
			y2 = n - lastOcc[arr[i]] - 1;
			tt=0;
			tempCal = 0;
			while(tt<=x && (tt+1)<=y1){
				tempCal += ((NCR[x][tt]*NCR[y1][tt+1])%MOD);
				tempCal = (tempCal%MOD);
				tt++;
			}
			tt=0;
			while(tt<=x && (tt+1)<=y2){
				tempCal -= (modu(NCR[x][tt]*NCR[y2][tt+1]));
				tempCal = modu(tempCal);
				tt++;
			}
			ans += tempCal;
			ans = modu(ans);
		}
		cout<<ans<<endl;
	}
	return 0;
}
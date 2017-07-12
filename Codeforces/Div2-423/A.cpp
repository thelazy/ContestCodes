#include <bits/stdc++.h>
using namespace std;

int main(){   
    int n, a, b, temp, ans=0, c=0;
    cin>>n>>a>>b;
    while(n--){
    	cin>>temp;
    	if(temp==2){
    		if(b>0)
    			b--;
    		else
    			ans += 2;
    	}
    	else{
    		if(a>0)
    			a--;
    		else if(b>0){
    			b--; c++;
    		}
    		else if(c>0)
    			c--;
    		else
    			ans++;
    	}
    }
    cout<<ans<<endl;
    return 0;
}

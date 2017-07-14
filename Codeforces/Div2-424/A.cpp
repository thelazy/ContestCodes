#include <bits/stdc++.h>
using namespace std;

int main(){   
    int st=1;
    int n, prev = INT_MIN, temp;
    cin>>n;
    if(n==1){
    	cout<<"YES"<<endl;
    	return 0;
    }
    while(n--){
    	cin>>temp;
    	if(temp>prev){
    		if(st<=2){
    			st=2;
    		}
    		else{
    			cout<<"NO"<<endl;
    			return 0;
    		}
    	}
    	else if(temp==prev){
    		if(st==4){
    			cout<<"NO"<<endl;
    			return 0;
    		}
    		else
    			st=3;
    	}
    	else{
    		if(st<=4){
    			st=4;
    		}
    		else{
    			cout<<"NO"<<endl;
    			return 0;
    		}
    	}
    	prev = temp;
    }
    	cout<<"YES"<<endl;
    return 0;
}

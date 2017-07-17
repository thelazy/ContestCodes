#include <bits/stdc++.h>
using namespace std;

int main(){   
    long long t, n, b, temp, temp1;
    cin>>t;
    while(t--){
        cin>>n>>b;
        if(n<=b){
            cout<<0<<endl;
        }
        else{
            temp = n/b;
            temp1 = temp/2;
            temp = temp-temp1;
            cout<<max(((n%b + b*temp)*temp1), ((n%b + b*temp1)*temp))<<endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b, m, s1=INT_MIN, e1=INT_MAX, s2=INT_MIN, e2=INT_MAX;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a>s1)
            s1 = a;
        if(b<e1)
            e1 = b;
    }
    cin>>m;
    while(m--){
        cin>>a>>b;
        if(a>s2)
            s2 = a;
        if(b<e2)
            e2 = b;
    }
    long long ans = max(s2-e1, s1-e2);
    if(ans>0)
        cout<<ans<<endl;
    else
        cout<<0<<endl;
    return 0;
}

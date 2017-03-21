#include <bits/stdc++.h>

using namespace std;

int mp[100000];

int main(){
    int n;
    int p;
    int q;
    cin >> n >> p >> q;
    vector<int> a(p);
    for(int a_i = 0; a_i < p; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(q);
    for(int b_i = 0; b_i < q; b_i++){
       cin >> b[b_i];
    }
    /*if ( m.find("f") == m.end() ) {
  // not found
} else {
  // found
}*/
    int temp;
    unordered_map < int, int > mp;
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            temp = (a[i]+b[j])%n;
            mp[temp]++;
        }
    }
    int mini=INT_MAX, ans;
    for(int i=1; i<=n; i++){
        if(mp[n-i]<mini){
            mini=mp[n-i];
            ans = i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, temp;
    cin >> m;
    set <int> s;
    for(int s_i = 0; s_i < m; s_i++){
       cin>>temp;
       s.insert(temp);
    }
    if(s.size()==m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
   
    return 0;
}

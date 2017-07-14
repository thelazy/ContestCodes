#include <bits/stdc++.h>
using namespace std;

int main(){   
    string s1, s2;
    cin>>s1;
    cin>>s2;
    unordered_map<char, char> mp;
    for(int i=0; i<26; i++){
    	mp[s1[i]]=s2[i];
    	mp[toupper(s1[i])] = toupper(s2[i]);
    }
    cin>>s1;
    for(int i=0; i<s1.length(); i++){
    	if(mp.find(s1[i])!=mp.end()){
    		cout<<mp[s1[i]];
    	}
    	else{
    		cout<<s1[i];
    	}
    }
    cout<<endl;
    return 0;
}

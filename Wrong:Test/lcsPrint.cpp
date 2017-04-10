#include <bits/stdc++.h>

using namespace std;
int cc[2000][2000];

int main() {
    int a, b;
    cin>>a>>b;
    int arr1[a], arr2[b];
    for(int i=0; i<a; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<b; i++){
        cin>>arr2[i];
    }
    int pre=-1, preM=0;
    vector <int> toP;
    for(int i=0; i<=a; i++){
        for(int j=0; j<=b; j++){
            if(i==0||j==0)
                cc[i][j]=0;
            else{
                cc[i][j]=max(cc[i-1][j], cc[i][j-1]);
                if(arr1[i-1]==arr2[j-1]){
                    cc[i][j]=max(cc[i][j],cc[i-1][j-1]+1);
                    if((i-1)!=pre && cc[i][j]>preM){
                      toP.push_back(arr1[i-1]);
                      pre = i-1;
                      preM = cc[i][j];
                    }
                }       
            }
        }
    }
    for(int ttt=0; ttt<toP.size()-1; ttt++){
      cout<<toP[ttt]<<" ";
    }
    cout<<toP[toP.size()-1];
    return 0;
}
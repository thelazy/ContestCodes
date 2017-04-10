#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map < int, int > arr;
    long long s, temp;
    cin>>s;
    char tt;
    vector < long long > coins;
    while(cin>>tt){
            if(tt=='}')
                break;
            cin>>temp;
            coins.push_back(temp);
    }
    int val[s+1], co[s+1], prev[s+1];
    val[0]=0;co[0]=0;prev[0]=0;
    sort(coins.begin(), coins.end());
    for(int i=1; i<=s; i++){
        int minR = 9999999, minJ=0, minP=0;
        for(int j=0; j<coins.size(); j++){
            if(coins[j]<=i){
                int temp = (val[i-coins[j]]+1);
                if(minR > temp){
                    minR = temp;
                    minJ = coins[j];
                    minP = i-coins[j];
                }
            }
            else
                break;
        }
        val[i] = minR;
        co[i]= minJ;
        prev[i] = minP;
    }
    if(val[s]>=9999999){
        cout<<"ERROR"<<endl;
        return 0;
    }

    int itr = s;

    while(itr>0){
        arr[co[itr]]++;
        itr = prev[itr];
    }

    for(int i=0; i<coins.size(); i++){
        cout<<"Rupee "<<coins[i]<<" coin "<<arr[coins[i]]<<endl;
    }
    return 0;
}

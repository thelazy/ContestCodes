#include <bits/stdc++.h>

using namespace std;

class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> maxi;
	priority_queue<int> mini;
    int cnt;
    MedianFinder() {
        while(!maxi.empty())
            maxi.pop();
        while(!mini.empty())
            mini.pop(); 
        cnt=0; 
    }
    
    void addNum(int num) {
        cnt++;
        if(mini.size()==0 || (-mini.top())<=num){
			mini.push(-num);
		}
		else{
			maxi.push(num);
		}
        if(cnt%2==1){
			if(mini.size()<maxi.size()){
				mini.push(-maxi.top());
				maxi.pop();
			}
		}
		else{
			if(mini.size()>maxi.size()){
				maxi.push(-mini.top());
				mini.pop();
			}
		}
    }
    
    double findMedian() {
        return 0.0;
        if(cnt%2==1){
            return (double)(-mini.top());
        }
        return (double)((double)(maxi.top()-mini.top())/2);
    }
};

int main(){

}
#include <bits/stdc++.h>
using namespace std;

vector<int> MaxHeap;

void initialize(){
	MaxHeap.clear();
}

void Heapify(){
	int ind = MaxHeap.size()-1, temp;
	while(ind && (MaxHeap[((ind-1)/2)]<MaxHeap[ind])){
		temp = MaxHeap[((ind-1)/2)];
		MaxHeap[((ind-1)/2)] = MaxHeap[ind];
		MaxHeap[ind] = temp;
		ind = ((ind-1)/2);
	}
	return;
}

int getTop(){
	if(MaxHeap.size()==0)
		return -1;
	return MaxHeap[0];
}

void makeTop(int ind){
	int callon = -1, val = MaxHeap[ind], temp;
	if((ind*2+1)<MaxHeap.size()){
		if(MaxHeap[(ind*2+1)]>val){
			val = MaxHeap[(ind*2+1)];
			callon = (ind*2+1);
		}
	}
	if((ind*2+2)<MaxHeap.size()){
		if(MaxHeap[(ind*2+2)]>val){
			val = MaxHeap[(ind*2+2)];
			callon = (ind*2+2);
		}
	}
	if(callon!=-1){
		temp = MaxHeap[callon];
		MaxHeap[callon] = MaxHeap[ind];
		MaxHeap[ind] = temp;
		makeTop(callon);
	}
	return;
}

void removeTop(){
	if(MaxHeap.size()==0)
		return;
	int temp = MaxHeap[MaxHeap.size()-1];
	MaxHeap.pop_back();
	if(MaxHeap.size()!=0){
		MaxHeap[0] = temp;
		makeTop(0);
	}
}

void insert(int val){
	MaxHeap.push_back(val);
	Heapify();
	return;
}

int main(){
	initialize();
	return 0;
}
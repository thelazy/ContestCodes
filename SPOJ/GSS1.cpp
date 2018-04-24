#include <bits/stdc++.h>
using namespace std;

struct node{
	long long mSum;
	long long pSum;
	long long sSum;
	long long tSum;
	long long l;
	long long r;
};

void buildTree(long long ind, long long l, long long r, vector<long long> & num, node Tree[]){
	//cout<<l<<" "<<r<<endl;
	if(l==r){
		Tree[ind].mSum = num[l];
		Tree[ind].pSum = num[l];
		Tree[ind].sSum = num[l];
		Tree[ind].tSum = num[l];
		Tree[ind].l = l;
		Tree[ind].r = r;
		return;
	}
	buildTree(ind*2, l, ((l+r)/2), num, Tree);
	buildTree(ind*2+1, (((l+r)/2)+1), r, num, Tree);
	Tree[ind].tSum = Tree[ind*2].tSum + Tree[ind*2 + 1].tSum;
	Tree[ind].pSum = max(Tree[ind*2].pSum, Tree[ind*2].tSum+Tree[ind*2+1].pSum);
	Tree[ind].sSum = max(Tree[ind*2+1].sSum, Tree[ind*2].sSum+Tree[ind*2+1].tSum);
	Tree[ind].mSum = max(Tree[ind*2].sSum+Tree[ind*2+1].pSum, max(Tree[ind*2].mSum, Tree[ind*2+1].mSum));
	Tree[ind].r = r;
	Tree[ind].l = l;
	return;
}

node mergeStruct(node a, node b){
	node ret;
	ret.mSum = max(a.sSum+b.pSum, max(a.mSum, b.mSum));
	ret.pSum = max(a.pSum, a.tSum+b.pSum);
	ret.sSum = max(b.sSum, b.tSum+a.sSum);
	ret.tSum = a.tSum + b.tSum;
	ret.l = a.l;
	ret.r = b.r;
	return ret;
}

node getAns(long long l, long long r, node Tree[], long long ind = 1){
	if(l==Tree[ind].l && r==Tree[ind].r){
		return Tree[ind];
	}
	if(r<=((Tree[ind].l+Tree[ind].r)/2)){
		return getAns(l, r, Tree, ind*2);
	}
	if(l>((Tree[ind].l+Tree[ind].r)/2)){
		return getAns(l, r, Tree, ind*2+1);
	}
	return mergeStruct(getAns(l, ((Tree[ind].l+Tree[ind].r)/2), Tree, ind*2), 
		getAns(((Tree[ind].l+Tree[ind].r)/2)+1, r, Tree, ind*2+1));
}

int main()
{
	long long n, q, l, r;
	scanf("%lld", &n);
	vector<long long> num(n);
	for(long long i=0; i<n; i++){
		scanf("%lld", &num[i]);
	}
	node Tree[4*n+50];
	buildTree(1, 0, n-1, num, Tree);
	scanf("%lld", &q);
	node ans;
	for(long long i=0; i<q; i++){
		scanf("%lld %lld", &l, &r);
		l--;r--;
		ans = getAns(l, r, Tree);
		printf("%lld\n", ans.mSum);
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node * left;
  Node * right;
} *mainroot;

struct Node * CrtNode(int k){
    Node * temp = new Node();
    temp->data = k;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void insert(Node * root, Node * ins){
    if(mainroot==NULL)
        mainroot = ins;
    else{
        if(ins->data>root->data){
            if(root->right)
                insert(root->right, ins);
            else
                root->right=ins;
            }
        else{ 
            if(root->left)
                insert(root->left,ins);
            else
                root->left=ins;
        }
    }
}

int main() {
    int t;
    cin>>t;
    int n=t;
    while(t--)
        {
        int x;
        cin>>x;
        insert(mainroot,CrtNode(x));
    }
    return 0;
}

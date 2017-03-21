#include <bits/stdc++.h> 
using namespace std; 

struct node
{
    node * left;
    node* right;
    int data; 
}; 

node* newNode(int x)
{
    node* temp=new node();
    temp->left=NULL;
    temp->right=NULL;
    temp->data=x;
    return temp;
}

bool isPairPresent(node* root,int sum) 
{
    node *x=root, *y=root;  
    stack <node*> s1,s2; //  s1 stores nodes through inorder traversal, s2 through reverse-inorder traversal
    
    int a,b;
 
  while(true) 
  {
    while(x)   
    {
        s1.push(x);
        x=x->left;
    }
    
    while(y)  
    {
        s2.push(y);
        y=y->right;
    }
    
    a=s1.top()->data;
    b=s2.top()->data;
     
    if(s1.empty() || s2.empty() || a>=b)   
        return false;
     
    if(a+b==sum) 
    {
        printf("Pair Found:(%d,%d)\n",a,b); 
        return true;
    }
    
    if(a+b<sum)
    {   
        x=s1.top()->right; 
        s1.pop();  
    }
    
    else if(a+b>sum)
    {  
        y=s2.top()->left;
        s2.pop(); 
    }
    
 }
}
  
int main()
{
    
    struct node *root =  newNode(15);
    root->left = newNode(10);
    root->right = newNode(21);
    root->left->left = newNode(8);
    root->left->right = newNode(12);
    root->left->right->left= newNode(11);
    root->left->right->right = newNode(13); 
    root->right->left = newNode(16);
    root->right->right = newNode(25); 
    int sum = 41;
    
    if (isPairPresent(root, sum) == false)
        printf("\n No such values are found\n");
     
    getchar();
    return 0;
}
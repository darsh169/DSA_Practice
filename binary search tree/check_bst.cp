#include<bits/stdc++.h>
using namespace std;

bool ino(Node *root,int& n)
{
    if(root==NULL)
    {
        return true;
    }
    if(!ino(root->left,n))
    {
        return false;
    }
    if(root->data<=n)
    {
        return false;
    }
    n=root->data;
    if(!ino(root->right,n))
    {
        return false;
    }
    return true;
}
bool isBST(Node* root) {
    // Your code here
    int n=INT_MIN;
    return ino(root,n);
   
}

 #include<bits/stdc++.h>
 using namespace std;
 
 
 void helper(vector<vector<int>>& result,Node *root,vector<int>& v)
 {
     if(root==NULL)
     {
         return ;
     }
     if(root->right==NULL && root->left==NULL)
     {
         v.push_back(root->data);
         result.push_back(v);
         v.pop_back();
         return;
     }
     v.push_back(root->data);
     helper(result,root->left,v);
     helper(result,root->right,v);
     v.pop_back();
 }
 
vector<vector<int>> Paths(Node* root)
{
    // Code here
    vector<vector<int>> result;
    vector<int>v;
    helper(result,root,v);
    return result;
}

#include<bits/stdc++.h>
using namespace std; 



void help(Node *root,int h,int w,int& maxl, int& maxr,map<int,pair<int,int>>& mp)
{
    if(root)
    {
        if(mp[w].first)       //if mp[i] is filled and its height is less than current point then change the current point
        {
            if(h<mp[w].first)
            {
                mp[w].second=root->data;
                mp[w].first=h;
            }
        }
        else
        {
            mp[w].second=root->data;
            mp[w].first=h;
        }
        maxl=min(w,maxl);
        maxr=max(w,maxr);
         help(root->left,h+1,w-1,maxl,maxr,mp);
         help(root->right,h+1,w+1,maxl,maxr,mp);
    }
   
}

void topView(struct Node *root)
{
    //Your code here
    int h=1;
    int w=0;
    int maxl=INT_MAX;
    int maxr=INT_MIN;
    map<int,pair<int,int>>mp;
    //mp[i] stores a pair, i referes to width ,mp[i].first referes height,mp[i].second referes the point to be printed
    help(root,h,w,maxl,maxr,mp);
    for(int i=maxl;i<=maxr;i++)
    {
        cout<<mp[i].second<<" ";
    }
    
    
    
}

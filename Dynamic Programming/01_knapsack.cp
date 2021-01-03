#include<bits/stdc++.h>
using namespace std;

int ks(int wt[],int val[],int W,int n,int **dp)
{
    if(n==0 || W==0)
    {
        return 0;
    }
    
    if(dp[n][W]!=-1)
    {
        return dp[n][W];
    }
    if(wt[n-1]<=W)
    {
        dp[n][W]=max(val[n-1]+ks(wt,val,W-wt[n-1],n-1,dp),ks(wt,val,W,n-1,dp));
        return dp[n][W];
    }
    dp[n][W]=ks(wt,val,W,n-1,dp);
    return dp[n][W];
    
}
// can be put in a knapsack of capacity W 
int knapSack(int W, int wt[], int val[], int n) 
{ 
    //declare 2d dp array for memoisation
    int **dp;
    dp=new int*[n+1];
    for(int i=0;i<n+1;i++)
    {
        dp[i]=new int[W+1];
    }
    //put -1 in all blocks
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<W+1;j++)
        {
            dp[i][j]=-1;
        }
    }
    
    return ks(wt,val,W,n,dp);
   // Your code here
}

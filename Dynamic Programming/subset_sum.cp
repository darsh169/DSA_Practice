#include<bits/stdc++.h>
using namespace std;

bool subsetSum(int arr[],int sum,int n,int **dp)
{
	if(sum==0)
	{
		return true;
	}
	if(n==0)
	{
		return false;
	}
	if(dp[n][sum]!=-1)
	{
		return dp[n][sum];
	}
	if(arr[n-1]>sum)
	{
		dp[n][sum]=subsetSum(arr,sum,n-1,dp);
		return dp[n][sum];
	}
	dp[n][sum]=subsetSum(arr,sum-arr[n-1],n-1,dp)|| subsetSum(arr,sum,n-1,dp);
	return dp[n][sum];
}



int main()
{
	cout<<"enter n:"<<endl;
	int n;cin>>n;
	int arr[n];
	
	cout<<"enter array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		// sum=sum+arr[i];
	}
	cout<<"Enter sum:"<<endl;
	int sum;cin>>sum;
	int **dp;
	dp= new int*[n+1];

	for(int i=0;i<n+1;i++)
	{
		dp[i]=new int[sum+1];
	}

	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<sum+1;j++)
		{
			dp[i][j]=-1;
		}
	}

	if(subsetSum(arr,sum,n,dp))
		cout<<"yes";
	else
		cout<<"NO";
	return 0;
}

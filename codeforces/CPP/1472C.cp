#include<bits/stdc++.h>
using namespace std;

int m2(int arr[],int n)
{
	int _max=0;
	vector<int>dp(n);
	for(int i=n-1;i>=0;i--)
	{
		dp[i]=arr[i];
		int j=i+arr[i];
		if(j<n)
		{
			dp[i]+=dp[j];
		}
	}
	return *max_element(dp.begin(),dp.end());

}
	


int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cout<<m2(arr,n)<<endl;
	}


	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int cal(int n,int k,int plank[])
{
	int sum=0;
	for(int i=0;i<k;i++)
	{
		sum=sum+plank[i];
	}
	int start=0;
	int ans=start;
	int current=sum;
	for(int i=k;i<n;i++)
	{
		current=current-plank[start]+plank[i];
		// cout<<current<<" ";
		if(current<sum)
		{
			sum=current;
			ans=start+1;
		}
		start++;
	}
	return ans+1;
}



int main()
{
	int n,k;cin>>n>>k;
	int plank[n];
	for(int i=0;i<n;i++)
	{
		cin>>plank[i];
	}
	cout<<cal(n,k,plank);



	return 0;
}

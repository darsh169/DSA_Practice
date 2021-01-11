#include<bits/stdc++.h>
using namespace std;

// int n,x;cin>>n>>x;
// int arr[n];
// for(int i=0;i<n;i++)
// 	cin>>arr[i];

int cal(int arr[],int n,int x)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
		if(arr[i]%x==0)
		{
			int temp=arr[i];
			while(temp%x==0)
			{
				sum=sum+arr[i];
				temp=temp/x;
			}
		}
	}
	return sum;
}
	


int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,x;cin>>n>>x;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cout<<cal(arr,n,x)<<endl;
	}

	return 0;
}

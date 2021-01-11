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
		int arr[3];
		int sum=0;
		for(int i=0;i<3;i++)
		{
			cin>>arr[i];
			sum=sum+arr[i];
		}
		if(sum%9!=0)
		{
			cout<<"No"<<endl;
		}
		else
		{
			int _min=*min_element(arr,arr+3);
			if(_min>=sum/9)
			{
				cout<<"Yes"<<endl;
			}
			else
				cout<<"NO"<<endl;
		}
	}

	return 0;
}

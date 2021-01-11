#include<bits/stdc++.h>

using namespace std;





int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		// for(int i=0;i<n;i++)
		// {
		// 	cout<<arr[i]<<" ";
		// }
		long long alice=0;
		for(int i=n-1;i>=0;i=i-2)
		{
			if(!(arr[i]&1))
			{
				// cout<<"even";
				alice=alice+arr[i];
			}
		}
		long long bob=0;
		for(int i=n-2;i>=0;i=i-2)
		{
			if(arr[i]&1)
			{
				// cout<<"odd";
				bob=bob+arr[i];
			}
		}
		if(alice==bob)
		{
			cout<<"Tie"<<endl;
		}
		else if(alice>bob)
			cout<<"Alice"<<endl;
		else
			cout<<"Bob"<<endl;
		// cout<<alice<<" "<<bob<<endl;
	}


	return 0;
}

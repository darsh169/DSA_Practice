#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,k;cin>>n>>k;
		int a,sum=0,_min=INT_MAX;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			sum+=a;
			_min=min(_min,a);
		}
		// cout<<sum<<" "<<_min<<endl;
		int amt=sum/k;
		if((sum-_min)/k==amt)
			cout<<-1<<endl;
		else
			cout<<amt<<endl;

	}
	return 0;
}

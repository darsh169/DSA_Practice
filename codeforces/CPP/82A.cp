#include<bits/stdc++.h>

using namespace std;






string answer(long n,vector<string> v)
{
	if(n<=5)
	{
		return v[n-1];
	}
	int x=floor(log2(n/5+1));
	long len=5*(pow(2,x)-1);
	if(len==n)
	{
		return v[4];
	}
	return v[(n-len)/pow(2,x)];
	
}

int main()
{
	vector<string>v={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	// for(auto x:v)
	// {
	// 	cout<<x;
	// }
	long n;cin>>n;
	cout<<answer(n,v);


	return 0;
}

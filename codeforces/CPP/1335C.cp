#include<bits/stdc++.h>

using namespace std;





int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int _max=0;
		map<int,int>mp;
		set<int>s;
		for(int i=0;i<n;i++)
		{
			int a;cin>>a;
			mp[a]++;
			_max=max(mp[a],_max);
			s.insert(a);
		}
		if(_max>s.size())
		{
			cout<<s.size()<<endl; 
		}
		else if(_max==s.size())
		{
			cout<<_max-1<<endl;
		}
		else
			cout<<_max<<endl;
	}



	return 0;
}

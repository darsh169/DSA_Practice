#include<bits/stdc++.h>
using namespace std;

void help(string s,string& t,int i,int n)
{
	cout<<t<<" ";
	for(int j=i;j<n;j++)
	{
		t.push_back(s[j]);
		help(s,t,j+1,n);
		t.pop_back();
	}
}



int main()
{
	string s;
	cin>>s;
	string t;

	help(s,t,0,s.length());
}

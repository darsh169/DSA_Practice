#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void all_per(vector<string>& v,int n,int i,string& s)
{
    if(i==n)
    {
        v.push_back(s);
        return ;
    }
    for(int j=i;j<n;j++)
    {
        swap(s[i],s[j]);
        all_per(v,n,i+1,s);
        swap(s[i],s[j]);
    }
}

int main() {
	//code
	int t;cin>>t;
	while(t--)
	{
	    string s;cin>>s;
	    vector<string>v;
    	all_per(v,s.length(),0,s);
    	sort(v.begin(),v.end());
    	for(auto x: v)
    	{
    	    cout<<x<<" ";
    	}
    	cout<<endl;
	}
	
	
	return 0;
}

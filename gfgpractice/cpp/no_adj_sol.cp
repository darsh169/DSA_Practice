#include<bits/stdc++.h>
using namespace std;

int cal(string s)
{
    map<char,int>mp;
    int _max=0;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
        _max=max(_max,mp[s[i]]);
    }
    //if we seperate the char having max frequency 
    //from string and we have sfficient chars to fill gaps
    //between the max found char then we can return 1
    //eg ssssaaabg
    // sasasasgb--no same character adjecent 
    if(s.length()-_max>=_max-1)
    {
        return 1;
    }
    return 0;
}

int main() {
	//code
	int t;cin>>t;
	while(t--)
	{
	    string s;cin>>s;
	    cout<<cal(s)<<endl;
	}
	return 0;
}

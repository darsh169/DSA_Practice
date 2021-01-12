using namespace std;

string cal(string s,int num)
{
    int temp=0;
    string res;
    int d,n;
    int j=0;
    while(temp<num && j<s.length())
    {
    	n=s[j]-48;
    	temp=temp*10+n;
    	j++;
    }
     d=temp/num;
            res=res+to_string(d);
            temp=temp%num;
    for(int i=j;i<s.length();i++)
    {
    	n=s[i]-48;
        temp=temp*10+n;
        if(temp<num)
        {
        	res=res+'0';
        }
        if(temp>=num)
        {
            d=temp/num;
            res=res+to_string(d);
            temp=temp%num;
        }
    }
    return res;
}


int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int num;cin>>num;
        cout<<cal(s,num)<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,m;
int color(string s,string r)
{
    int x=0,y=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            x++;
        }
    }
    for(int i=0;i<m-1;i++)
    {
        if(r[i]==r[i+1])
        {
            y++;
        }
    }
    if(x==0&&y==0)
    {
        return 1;
    }
    else if(x>=2||y>=2)
    {
        return 0;
    }
    else if(x>=1&&y>=1)
    {
        return 0;
    }
    else if(s[n-1]==r[m-1])
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        string r,s;
        cin>>s>>r;
        if(color(s,r))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
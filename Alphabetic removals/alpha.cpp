#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s,r="";
    cin>>s;
    map<char,vector<int>>mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]].push_back(i);
    }
    for(auto it:mp)
    {
        char c=it.first;
        vector<int>v=it.second;
        if(m==0)
        {
            break;
        }
        for(int val:v)
        {
            if(m!=0)
            {
                s[val]='0';
                m--;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]!='0')
        {
            cout<<s[i];
        }
    }
}
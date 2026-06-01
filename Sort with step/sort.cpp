#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            mp[a]=i;
        }
        int cnt=0;
        for(auto it:mp)
        {
            if(abs(it.second-it.first)%k!=0)
            {
                cnt++;
            }
            if(cnt>2)
            {
                break;
            }
        }
        if(cnt==0)
        {
            cout<<0<<endl;
        }
        else if(cnt==2)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
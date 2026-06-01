#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
        }
        int ans=0;
        for(auto it:mp)
        {
            ans+=min(it.second,c);
        }
        cout<<ans<<endl;
    }
}
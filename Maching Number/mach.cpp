#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--)
    {
        int n;cin>>n;

        if(n%2==0)
        {
            cout<<"NO\n";
        }

        else
        {
            cout<<"YES\n";
            vector<pair<int,int>>ans(n);
            int nxt=2*n;
            for(int i=0;i<n;i++)
            {
                ans[i].second=nxt;
                nxt--;
            }
            nxt=1;
            for(int i=0;i<=n/2;i++)
            {
                ans[i].first=nxt;
                nxt+=2;
            }
            nxt=2;
            for(int i=n/2+1;i<n;i++)
            {
                ans[i].first=nxt;
                nxt+=2;
            }
            for(auto i:ans)
            {
                cout<<i.first<<" "<<i.second<<"\n";
            }
        }
    }
}
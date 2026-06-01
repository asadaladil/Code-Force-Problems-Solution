#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll l=0,r=0,sum=0,ans=-1;
    while(r<n)
    {
        sum+=v[r];
        if(sum<=k)
        {
            ans=max(ans,r-l+1);
            r++;
        }
        else if(sum>k)
        {
            while(sum>k&&l<=r)
            {
                sum-=v[l];
                l++;
            }
            r++;
        }
    }
    cout<<ans<<"\n";
}
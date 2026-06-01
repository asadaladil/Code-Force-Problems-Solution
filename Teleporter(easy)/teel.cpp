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
        multiset<long long>m;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            m.insert(i+a);
        }
        int ans=0;
        for(auto it:m)
        {
            if(c>=it)
            {
                ans++;
                c-=it;
            }
            else
            {
                break;
            }

        }
        cout<<ans<<endl;
    }
}
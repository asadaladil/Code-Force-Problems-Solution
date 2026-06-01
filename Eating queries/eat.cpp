#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<ll>A(n+1),B;
        A[0]=0;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            B.push_back(a);
        }
        sort(B.rbegin(),B.rend());
        for(int i=1;i<=n;i++)
        {
            A[i]=A[i-1]+B[i-1];
        }
        while(q--)
        {
            int v;
            cin>>v;
            auto it=lower_bound(A.begin(),A.end(),v);
            if(it!=A.end())
            {
                cout<<it-A.begin()<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
}
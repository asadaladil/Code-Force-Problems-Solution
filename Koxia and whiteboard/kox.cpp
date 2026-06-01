#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>A(n);
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            sum+=A[i];
        }
        sort(A.begin(),A.end());
        int a;
        for(int i=0;i<m;i++)
        {
            cin>>a;
            sum-=A[0];
            sum+=a;
            A[0]=a;
            sort(A.begin(),A.end()); 
        }
        cout<<sum<<endl;
    }
}
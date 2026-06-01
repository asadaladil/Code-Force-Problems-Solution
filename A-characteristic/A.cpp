#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int r(int n)
{
    return n*(n-1)/2;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        bool p=true;
        vector<int>A(n,1);
        int P=n,N=0;
        for(int i=0;i<n;i++)
        {
            if(r(P)+r(N)==k)
            {
                cout<< "YES\n";
                p=false;
                for(auto it:A)
                {
                    cout<<it<<" ";
                }
                cout<<endl;
                break;
            }
            A[i]*=-1;P--,N++;
        }
        if(p)
        {
            cout<<"NO\n";
        }
    }
}
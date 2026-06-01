#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>A,B;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            if(a%2!=0)
            {
                A.push_back(i);
            }
            else
            {
                B.push_back(i);
            }
        }
        if(A.size()>=3)
        {
            cout<<"YES\n";
            for(int i=0;i<3;i++)
            {
                cout<<A[i]<<" ";
            }
            cout<<endl;
        }
        else if(A.size()>0&&A.size()<=2&&B.size()>=2)
        {
            cout<<"YES\n";
            for(int i=0;i<1;i++)
            {
                cout<<A[i]<<" ";
            }
            for(int i=0;i<2;i++)
            {
                cout<<B[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
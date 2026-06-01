#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        list<int>L;
        int n;
        cin>>n;
        int A[n+1][n+1];
        for(int i=1;i<=n*n;i++)
        {
            L.push_back(i);
        }
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                for(int j=1;j<=n;j++)
                {
                    if(j%2!=0)
                    {
                        A[i][j]=L.back();
                        L.pop_back();
                    }
                    else
                    {
                        A[i][j]=L.front();
                        L.pop_front();
                    }
                }
            }
            else
            {
                for(int j=n;j>=1;j--)
                {
                    if(j%2!=0)
                    {
                        A[i][j]=L.front();
                        L.pop_front();
                    }
                    else
                    {
                        A[i][j]=L.back();
                        L.pop_back();
                    }
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<A[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
}
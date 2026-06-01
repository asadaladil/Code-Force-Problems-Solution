#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        deque<int>L;
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int a;cin>>a;
            if(i==1)
            {
                L.push_back(a);
            }
            else if(L.front()<a)
            {
                L.push_back(a);
            }
            else
            {
                L.push_front(a);
            }
        }
        for(auto i:L)
        {
            cout<<i<<" ";
        }
        cout<<endl; 
    }
    
}
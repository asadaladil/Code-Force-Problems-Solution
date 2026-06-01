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
        vector<int>A(n);
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            mp[A[i]]++;
        }
        priority_queue<int>pq;
        for(auto it:mp)
        {
            pq.push(it.second);
        }
        while(pq.size()>1)
        {
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            a--;
            b--;
            if(a>0)
            {
                pq.push(a);
            }
            if(b>0)
            {
                pq.push(b);
            }
        }
        pq.size()==0?cout<<0<<"\n":cout<<pq.top()<<endl;
    }
}
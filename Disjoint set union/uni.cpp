#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int parent[N],Rank[N];
int Find(int node)
{
    if(node==parent[node])
    {
        return node;
    }
    int x=Find(parent[node]);
    parent[node]=x;
    return parent[node];
}
void Union(int a,int b)
{
    a=Find(a);
    b=Find(b);
    if(Rank[a]<Rank[b])
    {
        parent[a]=b;
    }
    else if(Rank[b]<Rank[a])
    {
        parent[b]=a;
    }
    else
    {
        parent[b]=a;
        Rank[a]++;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<N;i++)
    {
        parent[i]=i;
    }
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        string query;
        cin>>query;
        int u,v;
        cin>>u>>v;
        if(query=="union")
        {
            Union(u,v);
        }
        else
        {
            if(Find(u)==Find(v))
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
}
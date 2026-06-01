#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1005;
int maze[N][N];
int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,-1,-1,-1,0,1,1,1};
int visited[N][N];
int n;
bool is_inside(int x,int y)
{
    if(x>0&&y>0&&x<=n&&y<=n)
    {
        return true;
    }
    return false;
}
void BFS(int c,int d)
{
    visited[c][d]=1;
    queue<pair<int,int>>pq;
    pq.push({c,d});
    while(!pq.empty())
    {
        pair<int,int>head;
        head=pq.front();
        pq.pop();
        for(int i=0;i<8;i++)
        {
            int x=head.first;
            int y=head.second;
            int new_x=x+dx[i];
            int new_y=y+dy[i];
            if(maze[new_x][new_y]!=-1&&is_inside(new_x,new_y)&&visited[new_x][new_y]==0)
            {
                visited[new_x][new_y]=1;
                pq.push({new_x,new_y});
            }
        }
    }
}
void DFS(int c,int d)
{
    visited[c][d]=1;
    for(int i=0;i<8;i++)
    {
        int new_x=c+dx[i];
        int new_y=d+dy[i];
        if(maze[new_x][new_y]!=-1&&is_inside(new_x,new_y)&&visited[new_x][new_y]==0)
        {
            DFS(new_x,new_y);
        }
    }
}
int main()
{
    cin>>n;
    int a,b;
    cin>>a>>b;
    int c,d;
    cin>>c>>d;
    int e,f;
    cin>>e>>f;
    for(int i=1;i<=n;i++)
    {
        maze[a][i]=-1;
    }
    for(int i=1;i<=n;i++)
    {
        maze[i][b]=-1;
    }
    int x=a,y=b;
    while(x<n&&y<n)
    {
        x++;y++;
        maze[x][y]=-1;
    }
    x=a;y=b;
    while(x>1&&y>1)
    {
        x--;y--;
        maze[x][y]=-1;
    }
    x=a;y=b;
    while(x>1&&y<n)
    {
        x--;y++;
        maze[x][y]=-1;
    }
    x=a;y=b;
    while(x<n&&y>1)
    {
        x++;y--;
        maze[x][y]=-1;
    }
    /*for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<maze[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }*/
    DFS(c,d);
    visited[e][f]==1?cout<<"YES\n":cout<<"NO\n";
    /*for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<visited[i][j]<<" ";
        }
        cout<<endl;
    }*/
}

#include <stdio.h>
int n,m;
void sorting_puzzles(int R[])
{
    for(int i=1;i<=m;i++)
    {
        for(int j=i+1;j<=m;j++)
        {
            if(R[i]>R[j])
            {
                int s=R[i];
                R[i]=R[j];
                R[j]=s;
            }
        }
    }
    int x,q=0,y;
     for(int i=0;i<(m+1-n);i++)
    {
        x=R[i+1];y=R[i+1];
        for(int j=i+1;j<=n+i;j++)
        {
            if(x<R[j])
            {
                x=R[j];
            }
            if(y>R[j])
            {
                y=R[j];
            }
        }
        int z=x-y;
        if(q>z)
        {
            q=z;
        }
        else if(i==0)
        {
            q=z;
        }
    }
    printf("%d",q);
}
int main()
{
    scanf("%d%d",&n,&m);
    int R[m+1];
    for(int i=1;i<=m;i++)
    {
        scanf("%d",&R[i]);
    }
    sorting_puzzles(R);
    return 0;
}

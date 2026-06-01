#include <string.h>
#include <stdio.h>
int g;
int match_count(int A[],int B[])
{
    int d=0;
    for(int i=1;i<=g;i++)
    {
        for(int j=1;j<=g;j++)
        {
            if(A[i]==B[j])
            {
                d++;
            }
        }
    }
    return d;
}
int main()
{
    int n;
    scanf("%d",&n);
    g=n;
    int A[n+1],B[n+1];
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&A[i],&B[i]);
    }
    printf("%d",match_count(A,B));
    return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int a,f=0;
        scanf("%d",&a);
        int A[a+1],B[51];
        for(int j=0;j<51;j++)
        {
            B[j]=0;
        }
        for(int j=1;j<=a;j++)
        {
            scanf("%d",&A[j]);
            B[A[j]]++;
        }
        int r=A[1],s=A[1];
        for(int j=2;j<=a;j++)
        {
            if(r>A[j])
            {
                r=A[j];
            }
            if(s<A[j])
            {
                s=A[j];
            }
        }
        for(int j=r;j<=s;j++)
        {
            if(B[j]>0)
            {
                f=f+B[j];
            }
            else
            {
                break;
            }
        }
        if(f==a)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

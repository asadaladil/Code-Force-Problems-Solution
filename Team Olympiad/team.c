#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int A[4]={0,0,0,0};
    int B[a+1];
    for(int i=1;i<=a;i++)
    {
        int b;
        scanf("%d",&b);
        B[i]=b;
        A[b]++;
    }
    int r=A[1];
    for(int i=1;i<=3;i++)
    {
        if(r>A[i])
        {
            r=A[i];
        }
    }
    printf("%d\n",r);
    while(r--)
    {
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=a;j++)
            {
                if(B[j]==i)
                {
                    printf("%d ",j);
                    B[j]=0;
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}

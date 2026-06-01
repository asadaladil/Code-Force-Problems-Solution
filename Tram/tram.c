#include <stdio.h>
#include <string.h>
int main() {
    int a,d;
    scanf("%d",&a);
    int R[a+1][3],b=1,A[10000];
    for(int i=1;i<=a;i++)
    for(int i=0;i<10000;i++)
    {
        A[i]=0;
    }
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=2;j++)
        {
            scanf("%d",&R[i][j]);
            d=R[i][j];
            if(j==1)
            {
                A[b]=A[b-1]-d;
                b++;
            }
            else if(j==2)
            {
                A[b]=A[b-1]+d;
                b++;
            }
        }
    }
    int y=A[1];
    for(int i=2;i<10000;i++)
    {
        if(y<A[i])
        {
            y=A[i];
        }
    }
    printf("%d",y);
   

    return 0;
}
#include <stdio.h>
int main()
{

    int R[1000][4],i,j,sum=0;
    int a;
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=3;j++)
        {
            scanf("%d",&R[i][j]);
        }
    }
    for(i=1;i<=a;i++)
    {
        if(R[i][1]==1&&R[i][2]==1||R[i][2]==1&&R[i][3]==1||R[i][1]==1&&R[i][3]==1)
        {
            sum++;
        }

    }
    printf("%d",sum);

    return 0;
}

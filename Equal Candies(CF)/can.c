#include <stdio.h>
int main()
{
    int i,r,a,j;
    scanf("%d",&r);

    for(i=1;i<=r;i++)
    {
        scanf("%d",&a);
        int R[100],sum;
        sum=0;
        for(j=1;j<=a;j++)
        {
            scanf("%d",&R[j]);
        }
        int min=R[1];
       
        for(j=2;j<=a;j++)
        {
            if(min>R[j])
            {
                min=R[j];
            }
        }
        for(j=1;j<=a;j++)
        {
            sum=sum+(R[j]-min);
        }
        printf("%d\n",sum);
    }
    return 0;
}
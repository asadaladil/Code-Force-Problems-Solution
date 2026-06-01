#include <stdio.h>
#include <math.h>
void round_sum(int a)
{
    int i=1,cnt=0,A[100];
    while(a>0)
    {
        if(a%10>0)
        {
            int b=a%10;
            A[cnt]=b*i;
            cnt++;
            a=a/10;
            i*=10;
        }
        else
        {
            a=a/10;
            i*=10;
        }
    }
    printf("%d\n",cnt);
    for(int i=0;i<cnt;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int a;
        scanf("%d",&a);
        round_sum(a);
    }
    return 0;
}

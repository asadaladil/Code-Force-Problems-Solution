#include <stdio.h>
#include <math.h>
int main()
{
    long long t,i,j;
    scanf("%I64d",&t);
    for(i=1; i<=t; i++)
    {
        long long a,b=0;
        scanf("%I64d",&a);
        long long c=sqrt(a);
        for(j=2; j*j<=c; j++)
        {
            if(a%j==0)
            {
                break;
            }
        }
        if(j*j>c&&c*c==a&&a>1)
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

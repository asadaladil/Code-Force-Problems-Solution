#include <stdio.h>
#include <math.h>
int main()
{
    int k,r;
    scanf("%d%d",&k,&r);
    int i=1;
    if(k<=r&&r%k==0)
    {
        printf("%d",r/k);
    }
    else
    {
        while(1)
        {
            if((10*i)%k==0)
            {
                printf("%d",(10*i)/k);
                break;
            }
            else if((10*i+r)%k==0)
            {
                printf("%d",(10*i+r)/k);
                break;
            }
            else
            {
                i++;
            }
        }
    }
    return 0;
}

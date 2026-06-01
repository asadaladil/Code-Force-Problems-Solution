#include <stdio.h>
int main()
{
    long long int r,i;
    scanf("%lld",&r);


    for(i=1;i<=r;i++)
    {
        long long int a,b,c,j;
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a%c==0&&(a*b)>=c||b%c==0&&(a*b)>c)
        {
            printf("YES");
        }
        else if(a%2==0&&(a*b)>=c||b%2==0&&(a*b)>=c)
        {
            printf("YES");
        }
        else if(c==3&&(a*b)>c)
        {
           if((a*b)%(c+1)==0)
        {
            printf("YES");
        }
        }
        else if(c==1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        printf("\n");
    }

    return 0;
}

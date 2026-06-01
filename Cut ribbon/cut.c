#include <stdio.h>
int main() 
{
    int n,a,b,c,d=0;
    scanf("%d%d%d%d",&n,&a,&b,&c);
    for(int i=0;i*a<=n;i++)
    {
        for(int j=0;j*b<=n;j++)
        {
            if(i*a+j*b<=n&&(n-i*a-j*b)%c==0&&d<i+j+(n-i*a-j*b)/c)
            {
                d=i+j+(n-i*a-j*b)/c;
            }
        }
    }
    printf("%d",d);
    return 0;
}
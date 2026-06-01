#include <stdio.h>
#include <math.h>
int main()
{
    long long int n,k;
    scanf("%lld%lld",&n,&k);
    long long int a=1,cnt=0;
    for(int i=1;i<=k;i++)
    {
        long long int b;
        scanf("%lld",&b);
        cnt+=(b-a+n)%n;
        a=b;
    }
    printf("%lld",cnt);
    return 0;
}

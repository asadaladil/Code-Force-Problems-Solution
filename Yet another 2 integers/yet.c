#include <stdio.h>
#include <math.h>
int main()
{
    long int t;
    scanf("%ld",&t);
    for(int i=1;i<=t;i++)
    {
        long long int a,b;
        scanf("%lld%lld",&a,&b);
        long long int x=(abs(a-b)+9)/10;
        printf("%lld\n",x);
    }
    return 0;
}
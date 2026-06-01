#include <stdio.h>
void candies2(long long int a)
{
    if(a%2==0)
    {
        printf("%lld\n",a/2-1);
    }
    else
    {
        printf("%lld\n",a/2);
    }
}
int main()
{
    long long int t;
    scanf("%lld",&t);
    for(int i=1;i<=t;i++)
    {
        long long int a;
        scanf("%lld",&a);
        candies2(a);
    }
}

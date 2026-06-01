#include <stdio.h>
long long int interesting_sum(long long int n)// if the last digit of a number is 9 then it becomes interesting number.
{
    long long int a;
    a=n/10;
    if(n%10==9)
    {
        a++;
        return a;
    }
    else
    {
        return a;
    }

}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        long long int n;
        scanf("%lld",&n);
        printf("%lld\n",interesting_sum(n));
    }


    return 0;
}

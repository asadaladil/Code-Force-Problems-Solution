#include <stdio.h>
int is_prime(long long int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main() 
{
    long long int a,i,r;
    scanf("%lld",&a);
    for(i=2;i>1;i++)
    {
        if(is_prime(i)==0)
        {
            r=a-i;
            if(is_prime(r)==0)
            {
                printf("%lld %lld",i,r);
                break;
            }
        }
    }
    return 0;
}
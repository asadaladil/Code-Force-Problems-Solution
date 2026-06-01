#include <stdio.h>
int g;
long long int card_trick(long long int R[])
{
    long long int sum=0;
    for(int i=1;i<=g;i++)
    {
        sum=sum+R[i];
    }
    return sum;
}
int main()
{
    long long int t;
    scanf("%lld",&t);
    for(int i=1;i<=t;i++)
    {
        long long int a;
        scanf("%lld",&a);
        long long int A[a+1];
        for(int j=1;j<=a;j++)
        {
            scanf("%lld",&A[j]);
        }
        long long int b;
        scanf("%lld",&b);
        long long int B[b+1];
        for(int j=1;j<=b;j++)
        {
            scanf("%lld",&B[j]);
        }
        g=b;
        printf("%lld\n",A[(card_trick(B)%a)+1]);
    }

    return 0;
}

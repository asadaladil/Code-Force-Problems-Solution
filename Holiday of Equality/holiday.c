#include <stdio.h>
long long int g;
long long int large(long long int A[])
{
    long long int a=A[1];
    for(int i=2;i<=g;i++)
    {
        if(a<A[i])
        {
            a=A[i];
        }
    }
    return a;
}
long long int burle(long long int A[])
{
    long long int b=0;
    long long int a=large(A);
    for(int i=1;i<=g;i++)
    {
        b=b+(a-A[i]);
    }
    return b;
}
int main() 
{
    long long int n;
    scanf("%lld",&n);
    g=n;
    long long int A[n+1];
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&A[i]);
    }
    printf("%lld",burle(A));
    return 0;
}
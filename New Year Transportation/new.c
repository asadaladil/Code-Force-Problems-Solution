#include <stdio.h>
long long int g;
int new_year(long long int A[],long long int t)
{
    for(long long int i=1;i<g;)
    {
        i+=A[i];
        if(t==i)
        {
            return 1;
        }
        else if(i>t)
        {
            return 0;
        }
    }
    return 0;
}
int main()
{
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    g=a;
    long long int A[a];
    for(long long int i=1;i<a;i++)
    {
        scanf("%lld",&A[i]);
    }
    if(new_year(A,b)==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

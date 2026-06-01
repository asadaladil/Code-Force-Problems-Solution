#include <stdio.h>
int raising_bacteria(long long int a)
{
    int n=0;
    while(a>0)
    {
        n=n+a%2;
        a=a/2;
    }
    return n;
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",raising_bacteria(a));
    return 0;
}
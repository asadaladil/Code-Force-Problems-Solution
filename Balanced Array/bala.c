#include <stdio.h>
void balanced_array(long long int a)
{
    long long int odd=0,even=0,i,j;
    printf("YES\n");
    for(i=2;i<=a;i+=2)
    {
        printf("%d ",i);
    }
    for(j=1;j<=a-2;j+=2)
    {
        printf("%d ",j);
    }
    printf("%d\n",j+a/2);
}
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int a;
        scanf("%lld",&a);
        if(a%4==0)
        {
            balanced_array(a);
        }
        else
        {
            printf("NO\n");
        }
    }
}

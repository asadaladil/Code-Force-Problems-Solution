#include <stdio.h>
int main()
{
    long long int n,cnt=0,sum=0;
    scanf("%lld",&n);
    int a;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        sum+=a;
        if(sum<0)
        {
            sum=0;
            cnt++;
        }
    }
    printf("%lld",cnt);
    return 0;
}

#include <stdio.h>
int main()
{
    int n,k,cnt=0;
    scanf("%d%d",&n,&k);
    while(n--)
    {
        int a;
        scanf("%d",&a);
        if(a+k<=5)
        {
            cnt++;
        }
    }
    printf("%d",cnt/3);
    return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mini;
    scanf("%d",&mini);
    int maxx=mini,cnt=0;
    for(int i=1;i<n;i++)
    {
        int t;
        scanf("%d",&t);
        if(mini>t)
        {
            cnt++;
            mini=t;
        }
        else if(maxx<t)
        {
            cnt++;
            maxx=t;
        }
    }
    printf("%d",cnt);
}

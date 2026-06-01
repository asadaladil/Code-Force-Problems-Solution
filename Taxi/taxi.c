#include <stdio.h>

int main()
{
    int n,k,t=0;
    int S[5]={0,0,0,0,0};
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&k);
        S[k]++;
    }
    t=S[4]+S[3]+S[2]/2;
    S[1]=S[1]-S[3];
    if(S[2]%2!=0)
    {
        t++;
        S[1]=S[1]-2;
    }
    if(S[1]>0)
    {
        t+=S[1]/4;
        if(S[1]%4!=0)
        {
            t++;
        }
    }
    printf("%d",t);

    return 0;
}
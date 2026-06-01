#include <stdio.h>
int main() 
{
    long long int a,i,c,n;
    scanf("%lld",&a);
    long long int R[1000001];
    for(i=0;i<1000001;i++)
    {
        R[i]=0;
    }
    for(i=0;i<a;i++)
    {
        scanf("%lld",&n);
        R[n]++;
    }
    for(i=1;i<1000001;i++)
    {
        R[i]=R[i]+R[i-1];
    }
    scanf("%lld",&c);
    for(i=1;i<=c;i++)
    {
        long long int d;
        scanf("%lld",&d);
        printf("%lld\n",R[d<=1000000?d:1000000]);
    }
    return 0;
}
                                            /*   For running in this compiler
int main() 
{
    long long int a,i,c;
    scanf("%lld",&a);
    long long int R[a],j;
    for(i=0;i<a;i++)
    {
        scanf("%lld",&R[i]);
    }
    scanf("%lld",&c);
    for(i=1;i<=c;i++)
    {
        long long int d,b=0;
        scanf("%lld",&d);
        for(int j=0;j<a;j++)
        {
            if(R[j]<=d)
            {
                b++;
            }
        }
        printf("%d\n",b);
    }
    return 0;
}*/                                            
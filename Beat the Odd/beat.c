#include <stdio.h>
int g;
int beat_the_odd(int A[])
{
    int a=0,b=0;
    for(int i=0;i<g;i++)
    {
        if(A[i]%2==0)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if(a>=b)
    {
        printf("%d\n",b);
    }
    else
    {
        printf("%d\n",a);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int a;
        scanf("%d",&a);
        g=a;
        int A[a];
        for(int j=0;j<a;j++)
        {
            scanf("%d",&A[j]);
        }
        beat_the_odd(A);
        
    }
    return 0;
}
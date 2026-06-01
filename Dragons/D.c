#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    long long int a,e=0;
    scanf("%lld",&a);
    long long int b;
    scanf("%lld",&b);
    long long int R[b+1][2];
    for(int i=1;i<=b;i++)
    {
        scanf("%lld%lld",&R[i][1],&R[i][2]);
    }
    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(a>R[j][1]&&R[j][1]>0)
            {
                a=a+R[j][2];
                R[j][1]=0;
                e++;
            }
        }
    }
    if(e==b)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int n;
    scanf("%d",&n);
    int R[105];
    for(int i=0;i<105;i++)
    {
        R[i]=0;
    }
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        int b;
        scanf("%d",&b);
        R[b]++;
    }
    int c;
    scanf("%d",&c);
    for(int i=1;i<=c;i++)
    {
        int d;
        scanf("%d",&d);
        R[d]++;
    }
    int e=0;
    for(int i=1;i<=n;i++)
    {
        if(R[i]>0)
        {
            e++;
        }
        else
        {
            printf("Oh, my keyboard!");
            break;
        }
    }
    if(e==n)
    {
        printf("I become the guy.");
    }

    return 0;
}
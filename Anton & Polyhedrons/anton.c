#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    long long int a,b=0;
    scanf("%lld",&a);
    for(int i=1;i<=a;i++)
    {
        char R[1000];
        scanf("%s",R);
        if(R[0]=='I')
        {
            b=b+20;
        }
        else if(R[0]=='C')
        {
            b=b+6;
        }
        else if(R[0]=='T')
        {
            b=b+4;
        }
        else if(R[0]=='D')
        {
            b=b+12;
        }
        else if(R[0]=='O')
        {
            b=b+8;
        }
    }
    printf("%lld",b);
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    long long int a;
    int b=0;
    scanf("%lld",&a);
    for(int i=1;i>0;i++)
    {
        if(a>=100)
        {
            b++;
            a=a-100;
        }
        else if(a>=20&&a<=99)
        {
            b++;
            a=a-20;
        }
        else if(a>=10&&a<=19)
        {
            b++;
            a=a-10;
        }
        else if(a>=5&&a<=9)
        {
            b++;
            a=a-5;
        }
        else if(a>=1&&a<=4)
        {
            b++;
            a=a-1;
        }
        else if(a==0)
        {
            break;
        }
    }
    printf("%d",b);
    return 0;
}
#include <stdio.h>
int factor5_sum(int a)
{
    int sum=0;
    for(int i=1;i<=a;i++)
    {
        sum=sum+5*i;
    }
    return sum;
}

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int T=240;
    while(1)
    {
        if(factor5_sum(a)+b<=T)
        {
            printf("%d",a);
            break;
        }
        else
        {
            a--;
        }
    }
    

    return 0;
}
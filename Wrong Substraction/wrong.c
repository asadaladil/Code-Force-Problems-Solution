#include <stdio.h>
#include <string.h>
int main() {
    
    long long int a;
    int b;
    scanf("%lld%d",&a,&b);
    
    for(int i=1;i<=b;i++)
    {
        if(a%10==0)
        {
            a=a/10;
        }
        else
        {
            a=a-1;
        }
    }
    printf("%lld",a);
   

    return 0;
}
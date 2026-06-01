#include <stdio.h>
#include <string.h>
#include <math.h> 
int main() {
    long long int n,a,c;
    scanf("%lld",&n);
    long long int sum=0;
    if(n%2==0)
    {
        a=n/2;
        c=n/2;
    }
    else
    {
        a=n/2;
        c=n/2+1;
    }
    long long int b=c*c,d=a*(a+1);
    printf("%lld",d-b);
   

    return 0;
}
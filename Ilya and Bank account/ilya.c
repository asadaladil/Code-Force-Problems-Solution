#include <stdio.h>
int main() 
{
   long long int a;
   scanf("%lld",&a);
   long long int max=a;
   if(a/10>max)
   {
       max=a/10;
   }
   if(a%10+(a/100)*10>max)
   {
       max=a%10+(a/100)*10;
   }
   printf("%lld\n",max);
    return 0;
}
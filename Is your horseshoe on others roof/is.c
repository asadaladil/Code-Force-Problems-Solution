#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
   long long int a,b,c,d;
   scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
   if(a!=b&&b!=c&&c!=d&&d!=a&&a!=c&&b!=d)
   {
       printf("0");
   }
   else if(a==b&&b==c&&c==d)
   {
       printf("3");
   }
   else if(a==b&&b==c||a==b&&b==d||a==c&&c==d||b==c&&c==d||a==b&&c==d||a==d&&b==c||a==c&&b==d)
   {
       printf("2");
   }
   else if(a==b||b==c||c==d||d==a||a==c||b==d)
   {
       printf("1");
   }
   
   return 0;
}   
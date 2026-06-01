#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
   long long int n;
   scanf("%lld",&n);
   for(int i=1;i<=n;i++)
   {
      long long int a,b;
      scanf("%lld%lld",&a,&b);
      long long int c;
      if(a%b!=0)
      {
         c=a/b+1;
         printf("%lld\n",c*b-a);
      }
      else
      {
          printf("0\n");
      }
   }

    return 0;
}
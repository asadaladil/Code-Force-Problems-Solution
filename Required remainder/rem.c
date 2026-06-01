#include <stdio.h>
#include <math.h>
int main()
{
   long long int t,x,y,z,i;
   scanf("%lld",&t);
   for(i=1;i<=t;i++)
   {
       scanf("%lld%lld%lld",&x,&y,&z);
       printf("%lld\n",(z-(z-y)%x));
   }
    return 0;
}

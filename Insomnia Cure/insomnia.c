#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
   int k,l,m,n,i;
   long long int d,a;
   scanf("%d%d%d%d%lld",&k,&l,&m,&n,&d);
   int R[d+1];
   for(i=0;i<=d;i++)
   {
       R[i]=0;
   }
   for(i=k;i<=d;i=i+k)
   {
       R[i]=1;
   }
   a=d/k;
    for(i=l;i<=d;i=i+l)
   {
       if(R[i]==0)
       {
           R[i]=1;
           a++;
       }
   }
   for(i=m;i<=d;i=i+m)
   {
       if(R[i]==0)
       {
           R[i]=1;
           a++;
       }
   }
   for(i=n;i<=d;i=i+n)
   {
       if(R[i]==0)
       {
           R[i]=1;
           a++;
       }
   }
   printf("%lld",a);
    return 0;
}

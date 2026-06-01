#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
   int n,a=0,b=0,c=0,d=0;
   scanf("%d",&n);
   int x=n,e=0;
   int m[1005];
   for(int i=0;i<1005;i++)
   {
       m[i]=0;
   }
   while(n>0)
   {
       if(x%100==74)
       {
           d=1;
       }
       if((x%100)==99&&(x/100)<9)
       {
           e=1;
       }
       m[a]=n%10;
       if(m[a]==4)
       {
           b++;
       }
       if(m[a]==7)
       {
           c++;
       }
       n=n/10;
       a++;
   }
   if(b>0&&d==0||b>0&&c>0&&d==0)
   {
       printf("YES");
   }
   else if((x%4)==0||(x%7)==0)
   {
       printf("YES");
   }
   else if(e==1)
   {
       printf("YES");
   }
   else
   {
       printf("NO");
   }



    return 0;
}

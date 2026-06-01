#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
   int n,a;
   scanf("%d",&n);
   a=n;
   while(n!=0)
   {
       if(a==n)
       {
           printf("I hate ");
           n--;
       }
       if(n!=0)
       {
           printf("that I love ");
           n--;
       }
       if(n!=0)
       {
           printf("that I hate ");
           n--;
       }
       if(n==0)
       {
           printf("it");
       }
   }

    return 0;
}
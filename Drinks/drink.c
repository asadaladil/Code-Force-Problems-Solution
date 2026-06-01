#include <stdio.h>

int main() {
   int n;
   float b=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       int a;
       scanf("%d",&a);
       b=b+a;
   }
   printf("%.12f",b/n);

    return 0;
}
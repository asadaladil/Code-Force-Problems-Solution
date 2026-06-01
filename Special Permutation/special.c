#include <stdio.h> //value cannot match with the index
#include <string.h>
#include <math.h>

int main() {
   int a;
   scanf("%d",&a);
   for(int i=1;i<=a;i++)
   {
       int b;
       scanf("%d",&b);
       for(int j=2;j<=b;j++)
       {
           if(j==b)
           {
               printf("%d 1",j);
           }
           else
           {
               printf("%d ",j);
           }
           
       }
       printf("\n");
   }

    return 0;
}
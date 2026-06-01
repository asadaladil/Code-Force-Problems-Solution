#include <stdio.h>
#include <string.h>
#include <math.h> 
int main() {
   char R[105];
   scanf("%s",R);
   int len=strlen(R),a=0;
   for(int i=0;i<len;i++)
   {
       if(R[i]=='H'||R[i]=='Q'||R[i]=='9')
       {
           a++;
       }
   }
   if(a>0)
   {
       printf("YES");
   }
   else
   {
       printf("NO");
   }
   

    return 0;
}
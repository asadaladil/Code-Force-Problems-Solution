#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
   char R[105],A[105];
   scanf("%s",R);
   scanf("%s",A);
   char B[105];
   int len=strlen(R);
   B[len]='\0';
   for(int i=0;i<len;i++)
   {
       if(R[i]==A[i])
       {
           B[i]='0';
       }
       else
       {
           B[i]='1';
       }
   }
   printf("%s",B);

    return 0;
}
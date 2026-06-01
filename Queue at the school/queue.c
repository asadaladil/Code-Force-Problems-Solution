#include <stdio.h>
#include <string.h>
int main() {
   int a,b;
   scanf("%d%d",&a,&b);
   char R[a+1];
   scanf("%s",R);
   for(int i=1;i<=b;i++)
   {
       for(int j=0;j<a;j++)
       {
           if(R[j]=='B'&&R[j+1]=='G')
           {
               R[j]='G';
               R[j+1]='B';
               j++;
             
           }
       }
   }
   puts(R);

    return 0;
}
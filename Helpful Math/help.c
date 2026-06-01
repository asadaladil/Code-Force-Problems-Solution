#include <stdio.h>
#include <string.h>
int main() {
   char R[110];
   scanf("%s",R);
   int A[110],m=0;
   int a=0,b=0,c=0;
   int len=strlen(R);
   for(int i=0;i<len;i++)
   {
       if(R[i]=='1')
       {
           a++;
       }
       else if(R[i]=='2')
       {
           b++;
       }
       else if(R[i]=='3')
       {
           c++;
       }
   }
   for(int i=1;i<=3;i++)
   {
        if(i==1)
       {
           for(int j=1;j<=a;j++)
           {
               R[m]='1';
               m++;
               if(m%2!=0&&m<len)
               {
                   R[m]='+';
                   m++;
               }
           }
       }
       else if(i==2)
       {
           for(int j=1;j<=b;j++)
           {
               R[m]='2';
               m++;
               if(m%2!=0&&m<len)
               {
                   R[m]='+';
                   m++;
               }
           }
       }
       else if(i==3)
       {
           for(int j=1;j<=c;j++)
           {
               R[m]='3';
               m++;
               if(m%2!=0&&m<len)
               {
                   R[m]='+';
                   m++;
               }
           }
       }
   }
   puts(R);

    return 0;
}
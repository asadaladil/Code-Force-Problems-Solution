#include <stdio.h>

int main()

{
   int n,i,a,j,m;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a);
       int R[a+1],B[101];
       for(j=1;j<=a;j++)
       {
        scanf("%d",&R[j]);
       }
       for(j=1;j<=101;j++)
       {
        B[j]=0;
       }
       for(j=1;j<=a;j++)
       {
        B[R[j]]+=1;
       }
       for(j=1;j<=a;j++)
       {
        if(B[R[j]]==1)
        {
           m=j;
           break;
        }
       }
       printf("%d\n",m);
   }   
return 0;
}

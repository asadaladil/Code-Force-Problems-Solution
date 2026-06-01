#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
   int a;
   scanf("%d",&a);
   for(int i=1;i<=a;i++)
   {
       int b;
       scanf("%d",&b);
       int R[b+1];
       for(int j=1;j<=b;j++)
       {
           scanf("%d",&R[j]);
       }
       for(int j=1;j<=b;j++)
       {
           int c;
           scanf("%d",&c);
           char A[105];
           scanf("%s",A);
           for(int m=0;m<c;m++)
           {
                if(A[m]=='D')
                {
                    if(R[j]==9)
                    {
                        R[j]=0;
                    }
                    else
                    {
                        R[j]++;
                    }
                }
                else if(A[m]=='U')
                {
                    if(R[j]==0)
                    {
                        R[j]=9;
                    }
                    else
                    {
                        R[j]--;
                    }
                }
           }
       }
       for(int j=1;j<=b;j++)
       {
           printf("%d ",R[j]);
       }
       printf("\n");
       
   }

    return 0;
}
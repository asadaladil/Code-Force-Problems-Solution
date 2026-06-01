#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
  int a,b,c=0;
  scanf("%d%d",&a,&b);
  int R[a+1];
  for(int i=1;i<=a;i++)
  {
      scanf("%d",&R[i]);
      if(R[i]>b)
      {
          if(R[i]%b==0)
          {
              c=c+R[i]/b;
          }
          else
          {
              c=c+(R[i]/b)+1;
          }
      }
      else
      {
          c++;
      }
  }
  printf("%d",c);
  


    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main() {
  int n;
  scanf("%d",&n);
  int R[n+1];
  for(int i=1;i<=n;i++)
  {
      scanf("%d",&R[i]);
  }
  int min;
  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          if(R[i]>R[j])
          {
              min=R[i];
              R[i]=R[j];
              R[j]=min;
          }
      }
  }
  for(int i=1;i<=n;i++)
  {
      printf("%d ",R[i]);
  }
 
    return 0;
}
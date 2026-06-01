#include <stdio.h>
#include <string.h>

int main()
{
  int a,b=0;
  scanf("%d",&a);
  int c=a*3;
  int R[c+1][c+1];
  for(int i=1;i<=a;i++)
  {
      for(int j=1;j<=3;j++)
      {
        scanf("%d",&R[i][j]);  
      }
  }
  for(int i=1;i<=3;i++)
  {
      for(int j=1;j<=a;j++)
      {
        b=b+R[j][i];
      }
      if(b==0)
      {
          continue;
      }
      else
      {
          break;
      }
  }
  if(b==0)
  {
      printf("YES");
  }
  else
  {
      printf("NO");
  }
  
    return 0;

}

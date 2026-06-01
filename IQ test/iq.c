#include <stdio.h>
#include <string.h>

int main()
{
  int a,b=0;
  scanf("%d",&a);
  int R[a+1];
  for(int i=1;i<=a;i++)
  {
      scanf("%d",&R[i]);
      if(R[i]%2==0)
      {
         b++; 
      }
  }
  if(a-b==1)
  {
      for(int i=1;i<=a;i++)
  {
      if(R[i]%2!=0)
      {
          printf("%d",i);
          break;
      }
  }
      
  }
  else if(b==1)
  {
     for(int i=1;i<=a;i++)
  {
      if(R[i]%2==0)
      {
          printf("%d",i);
          break;
      } 
  }
  }
  return 0;

}

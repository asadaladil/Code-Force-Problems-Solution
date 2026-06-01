#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
  long long int n;
  int a,b=0;
  scanf("%lld",&n);
  int R[11];
  for(int i=0;i<11;i++)
  {
      R[i]=0;
  }
  while(1)
  {
      n++;
      long long int x=n;
      while(x>0)
      {
          
          
            a=x%10;
            R[a]++;
            x=x/10;
          
      }
      for(int i=0;i<11;i++)
      {
          if(R[i]==1)
          {
            b++;  
          }
         R[i]=0;
      }
      if(b==4)
      {
          printf("%lld",n);
          break;
      }
      b=0;
  }


    return 0;
}

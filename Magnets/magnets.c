#include <stdio.h>
#include <string.h>
#include <math.h> 
int main() {
  long long int n;
  scanf("%lld",&n);
  int A[n+1];
  A[0]=0;
  int a=0,b=0,cnt=0;
  for(int i=1;i<=n;i++)
  {
      scanf("%d",&A[i]);
  }
  for(int i=1;i<=n;i++)
  {
      if(A[i]==10)
      {
          if(A[i-1]==01)
          {
            cnt=cnt+b/b;
            b=0;
            a++;
          }
          else
          {
              a++;
          }
      }
      else if(A[i]==01)
      {
          if(A[i-1]==10)
          {
              cnt=cnt+a/a;
              a=0;
              b++;
          }
          else
          {
              b++;
          }
      }
  }
  if(a>0||b>0)
  {
      if(a>0)
      {
          cnt=cnt+a/a;
      }
      else
      {
          cnt=cnt+b/b;
      }
  }
  printf("%d",cnt);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
  long long int k,n,w;
  scanf("%lld%lld%lld",&k,&n,&w);
  int a=0;
  for(int i=1;i<=w;i++)
  {
      a=a+k*i;
  }
  if(a>n)
  {
      printf("%lld",a-n);
  }
  else
  {
      printf("0");
  }
    return 0;

}

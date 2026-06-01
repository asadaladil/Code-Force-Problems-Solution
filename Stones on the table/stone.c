#include <stdio.h>
#include <string.h>
int main() {
  int a,b=0;
  scanf("%d",&a);
  char R[a+1];
  scanf("%s",R);
  for(int i=0;i<a;i++)
  {
      if(R[i]==R[i+1])
      {
        b++;  
      }
  }
  printf("%d",b);

    return 0;
}
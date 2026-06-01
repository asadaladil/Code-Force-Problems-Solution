#include <stdio.h>
#include <string.h>

int main()
{
  char a[101];
  scanf("%s",a);
  int len=strlen(a);
  int max = 0;
  int counter = 0;
  for(int i=0; i < len; i++)
    {
      for(int j = i; a[i]==a[j] ; j++)
        {
          counter++;
        }
      if(counter > max) {
      max = counter;
      counter = 0;
      }
      else counter = 0;
    }
    if(max>=7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;

}

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
   int a;
   scanf("%d",&a);
   for(int i=1;i<=a;i++)
   {
        int d,b,c;
        scanf("%d%d%d",&d,&b,&c);
        if(d+b==c)
        {
            printf("YES\n");
        }
        else if(b+c==d)
        {
            printf("YES\n");
        }
        else if(c+d==b)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
   }

    return 0;
}
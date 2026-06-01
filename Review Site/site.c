#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    long long int a;
    scanf("%lld",&a);
    for(int i=1;i<=a;i++)
    {
        int e,b=0,c=0;
        scanf("%d",&e);
        for(int j=1;j<=e;j++)
        {
            int f;
            scanf("%d",&f);
            if(f%2==0)
            {
                c++;
            }
            else
            {
                b++;
            }
        }
        printf("%d\n",b);
    }

    return 0;
}
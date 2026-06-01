#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    if(a%2==0&&a>2)
    {
        b=a-2;
        c=a-b;
        if(b%2==0&&c%2==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}

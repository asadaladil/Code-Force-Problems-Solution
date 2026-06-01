#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char r[100];
        scanf("%s",r);
        int l=strlen(r);
        for(int i=0;i<l;i++)
        {
            if(i%2!=0||i==0)
            {
                printf("%c",r[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

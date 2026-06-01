#include <stdio.h>
#include <string.h>
int main()
{
    char R[102];
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=(t+1);i++)
    {
        fgets(R,sizeof(R),stdin);
        int len=strlen(R)-1;
        if(len>10)
        {
            printf("%c%d%c\n",R[0],len-2,R[len-1]);
        }
        else
        {
            puts(R);
        }
    }

    return 0;
}

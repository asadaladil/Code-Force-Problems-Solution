#include <string.h>
#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        char R[200],A[200];
        scanf("%s",R);
        int len=strlen(R),a=0;
        R[len]='\0';A[len]='\0';
        for(int j=len-1;j>=0;j--)
        {
            A[a]=R[j];
            a++;
        }
        printf("%s%s\n",R,A);
    }

    return 0;
}
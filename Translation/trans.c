#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    char R[105],A[105],B[105];
    scanf("%s",R);
    scanf("%s",A);
    int len=strlen(R),a=0;
    for(int i=(len-1);i>=0;i--)
    {
        B[a]=A[i];
        a++;
    }
    int b=0;
    for(int i=0;i<len;i++)
    {
        if(R[i]==B[i])
        {
            b++;
        }
    }
    if(b==len)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
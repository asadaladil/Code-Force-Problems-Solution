#include <stdio.h>
#include <string.h>

int main() {
    char R[1050];
    int A[124];
    fgets(R,sizeof(R),stdin);
    int len=strlen(R)-1;
    for(int i=0;i<124;i++)
    {
        A[i]=0;
    }
    for(int i=0;i<len;i++)
    {
        if(R[i]>='A'&&R[i]<='Z')
        {
            R[i]=R[i]+32;
        }
    }
    for(int i=0;i<len;i++)
    {
        if(R[i]>='a'&&R[i]<='z')
        {
            A[R[i]]++;
        }
    }
    int b=0;
    for(int i=97;i<=122;i++)
    {
        if(A[i]>0)
        {
            b++;
        }
    }
    printf("%d",b);
    

    return 0;
}
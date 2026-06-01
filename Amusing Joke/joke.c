#include <stdio.h>
#include <string.h>
#include <math.h>

int main() 
{
    char R[1000],A[1000],B[1000];
    int x=0,y=0;
    scanf("%s",R);
    scanf("%s",A);
    scanf("%s",B);
    int r=strlen(R),a=strlen(A),b=strlen(B);
    int C[100],D[100],e=0;
    for(int i=0;i<100;i++)
    {
        C[i]=0;D[i]=0;
    }
    for(int i=0;i<r;i++)
    {
        C[R[i]]++;
    }
     for(int i=0;i<a;i++)
    {
        C[A[i]]++;
    }
     for(int i=0;i<b;i++)
    {
        D[B[i]]++;
    }
     for(int i=65;i<93;i++)
    {
        if(C[i]==D[i])
        {
            e++;
        }
        else
        {
            printf("NO\n");
            break;
        }
    }
    if(e==28)
    {
        printf("YES\n");
    }
    return 0;
}
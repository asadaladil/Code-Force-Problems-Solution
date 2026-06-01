#include <stdio.h>
#include <string.h>

int main() {
    int A[124],a;
    scanf("%d",&a);
    char R[a+1];
    scanf("%s",R);
    for(int i=0;i<124;i++)
    {
        A[i]=0;
    }
    for(int i=0;i<a;i++)
    {
        if(R[i]>='A'&&R[i]<='Z')
        {
            R[i]=R[i]+32;
        }
    }
    for(int i=0;i<a;i++)
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
    if(b==26)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
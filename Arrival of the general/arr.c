#include <stdio.h>
/*int g;
int count(int A[])
{
    int a=Large(A);
    int b=Small(A);
    if(a>b)
    {
        b++;
    }
    return a+(g-b-1);
}
int Large(int A[])
{
    int r=A[0],t;
    for(int i=1;i<g;i++)
    {
        if(r<A[i])
        {
            r=A[i];
            t=i;
        }
    }
    return t;
}
int Small(int A[])
{
    int r=A[0],t;
    for(int i=1;i<g;i++)
    {
        if(r>=A[i])
        {
            r=A[i];
            t=i;
        }
    }
    return t;
}
int main() 
{
    int a;
    scanf("%d",&a);
    g=a;
    int R[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&R[i]);
    }
    printf("%d",count(R));
    return 0;
}*/
                                            // Another way to calculate:
int main()
{
    int a;
    scanf("%d",&a);
    int R[a+1];
    for(int i=1;i<=a;i++)
    {
        scanf("%d",&R[i]);
    }
    int r=R[1],s=R[1],e=1,f=1;
    for(int i=2;i<=a;i++)
    {
        if(r<R[i])
        {
            r=R[i];
            e=i;
        }
        if(s>=R[i])
        {
            s=R[i];
            f=i;
        }
    }
    if(e>f)
    {
        f++;
    }
    printf("%d",e+(a-f-1));
    return 0;
}


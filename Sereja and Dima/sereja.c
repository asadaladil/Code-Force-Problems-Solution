#include <stdio.h>
int g;
void sereja_dima(int A[],int *p,int *q)
{
    int a=1,b=g;
    for(int i=1;i<=g;i++)
    {
        if(i%2!=0)
        {
            if(A[a]>A[b])
            {
                *p=*p+A[a];
                a++;
            }
            else
            {
                *p=*p+A[b];
                b--;
            }
        }
        else
        {
            if(A[a]>A[b])
            {
                *q=*q+A[a];
                a++;
            }
            else
            {
                *q=*q+A[b];
                b--;
            }
        }
    }
}
int main() 
{
    int n;
    scanf("%d",&n);
    g=n;
    int A[n+1];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&A[i]);
    }
    int p=0,q=0;
    sereja_dima(A,&p,&q);
    printf("%d %d",p,q);
    return 0;
}
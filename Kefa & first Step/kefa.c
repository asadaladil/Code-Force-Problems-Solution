#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    long long int n;
    scanf("%lld",&n);
    long long int R[n],A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&R[i]);
        A[i]=0;
    }
    int a=0,c=0;
    if(n==1)
    {
        printf("1");
    }
    else{
    for(int i=0;i<n;i++)
    {
        if(R[i]<=R[i+1]&&i<n-1)
        {
            if(a==0)
            {
                a+=2;
            }
            else
            {
                a++;
            }
        }
        else
        {
            A[c]=a;
            a=0;
            c++;
        }
    }
    long long int max=A[0];
    for(int i=1;i<=c;i++)
    {
        if(max<A[i])
        {
            max=A[i];
        }
    }
    if(max==0)
    {
        printf("1");
    }
    else
    {
        printf("%lld",max);   
    }
    }

    return 0;
}
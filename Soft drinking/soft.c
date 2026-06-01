#include <stdio.h>
int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int a[3];
    a[0]=(k*l)/(nl*n);
    a[1]=(c*d)/n;
    a[2]=(p/np)/n;
    int r=a[0];
    for(int i=1;i<3;i++)
    {
        if(r>a[i])
        {
            r=a[i];
        }
    }
    printf("%d",r);
    return 0;
}

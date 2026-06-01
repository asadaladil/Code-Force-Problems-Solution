#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int R[5];
    R[0]=a+b*c;
    R[1]=a*(b+c);
    R[2]=a*b*c;
    R[3]=(a+b)*c;
    R[4]=a+b+c;
    int max=R[0];
    for(int i=1;i<5;i++)
    {
        if(max<R[i])
        {
            max=R[i];
        }
    }
    printf("%d",max);

    return 0;
}
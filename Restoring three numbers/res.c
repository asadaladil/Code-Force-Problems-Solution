#include <stdio.h>
int main() {
    int R[5];
    for(int i=1;i<5;i++)
    {
        scanf("%d",&R[i]);
    }
    int r=R[1];
    for(int i=2;i<5;i++)
    {
        if(r<R[i])
        {
            r=R[i];
        }
    }
    for(int i=1;i<5;i++)
    {
        if(r!=R[i])
        {
            printf("%d ",r-R[i]);
        }
    }
    return 0;
}
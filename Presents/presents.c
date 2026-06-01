#include <string.h>
#include <stdio.h>
#include <math.h>
int main() {
    int a;
    scanf("%d",&a);
    int R[a+1];
    for(int i=1;i<=a;i++)
    {
        scanf("%d",&R[i]);
    }
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(R[j]==i)
            {
                printf("%d ",j);
            }
        }
    }

    return 0;
}
/*comparing with the index. first of all we have to found that number from(1 to a) input and then find out the
index of it and print it */
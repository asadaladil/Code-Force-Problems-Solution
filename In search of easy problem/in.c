#include <string.h>
#include <stdio.h>
#include <math.h>
int main() {
    int a;
    int d=0;
    scanf("%d",&a);
    int R[a+1];
    for(int i=1;i<=a;i++)
    {
        scanf("%d",&R[i]);
        if(R[i]==1)
        {
            d++;
        }
    }
    if(d>0)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }
    

    return 0;
}
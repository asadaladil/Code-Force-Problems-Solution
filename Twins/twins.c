#include <string.h>
#include <stdio.h>
#include <math.h>
int main() {
    int a;
    scanf("%d",&a);
    int R[a+1],b=0,c=0;
    for(int i=1;i<=a;i++)
    {
        scanf("%d",&R[i]);
        b=b+R[i];
    }
    b=b/2;
    int x,y=0;
    for(int i=1;i<=a;i++)
    {
        for(int j=i+1;j<=a;j++)
        {
            if(R[i]>R[j])//sorting-descending
            {
                x=R[i];
                R[i]=R[j];
                R[j]=x;
            }
        }
    }
    for(int i=a;i>0;i--)
    {
        c=c+R[i];
        y++;
        if(b<c)
        {
            break;
        }
    }
    printf("%d",y);
    return 0;
}
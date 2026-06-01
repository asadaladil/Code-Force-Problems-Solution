#include <stdio.h>
int dislike_three(int a)
{
    int R[5000],n=1;
    for(int i=1;i<=5000;i++)
    {
        if(i%3==0||i%10==3)
        {
            continue;
        }
        else
        {
            R[n]=i;
            n++;
        }
    }
    return R[a];
}
int main() {
    
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int a;
        scanf("%d",&a);
        printf("%d\n", dislike_three(a));
    }
    
    return 0;
}
#include <stdio.h>
int main() {
    int R[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&R[i]);
    }
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(R[i]>R[j])
            {
                int t=R[i];
                R[i]=R[j];
                R[j]=t;
            }
        }
    }
    printf("%d",(R[1]-R[0])+(R[2]-R[1]));
    return 0;
}
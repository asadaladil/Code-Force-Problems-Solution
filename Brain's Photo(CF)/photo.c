#include <stdio.h>
int main()
{
    int r,c,i,b=0,d=0;
    scanf("%d%d",&r,&c);
    char R[r*c*2];

    for(i=1;i<=(r*c*2);i++)
    {
       scanf("%c",&R[i]);
    }

    for(i=1;i<=(r*c*2);i++)
    {
        if(R[i]=='W'||R[i]=='B'||R[i]=='G')
        {
            b++;
        }
        else if(R[i]=='C'||R[i]=='M'||R[i]=='Y')
        {
            d++;
        }
    }
    if(d>=1)
    {
        printf("#Color");
    }
    else
    {
        printf("#Black&White");
    }
    return 0;
}

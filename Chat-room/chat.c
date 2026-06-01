#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char R[105];
    scanf("%s",R);
    int b,f=0;
    int len=strlen(R);
    while(f==0)
    {
        for(int i=0; i<len; i++)
        {
            if(R[i]=='h')
            {
                f++;
                b=i;
                break;
            }
        }
        if(f==1)
        {
            for(int i=b; i<len; i++)
            {
                if(R[i]=='e')
                {
                    f++;
                    b=i;
                    break;
                }
            }
        }
        else
        {
            break;
        }
        if(f==2)
        {
            for(int i=b; i<len; i++)
            {
                if(R[i]=='l')
                {
                    f++;
                }
                if(f==4)
                {
                    b=i;
                    break;
                }
            }
        }
        else
        {
            break;
        }
        if(f==4)
        {
            for(int i=b; i<len; i++)
            {
                if(R[i]=='o')
                {
                    f++;
                    break;
                }
            }
        }
        else
        {
            break;
        }
    }
    if(f==5)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }


    return 0;
}

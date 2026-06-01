#include <stdio.h>
#include <string.h>
int main() 
{    
    int t,m=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            m++;
        }
        else if(b>a)
        {
            m--;
        }
        
    }
    if(m>0)
    {
        printf("Mishka\n");
    }
    else if(m<0)
    {
        printf("Chris\n");
    }
    else
    {
        printf("Friendship is magic!^^\n");
    }
    return 0;
}
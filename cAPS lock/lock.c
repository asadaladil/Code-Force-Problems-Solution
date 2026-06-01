#include <stdio.h>
#include <string.h>

int main() {
    char R[105];
    scanf("%s",R);
    int len=strlen(R),l=0,u=0;
    for(int i=0;i<len;i++)
    {
        if(R[i]>='A'&&R[i]<='Z')
        {
            u++;
        }
        else if(R[i]>='a'&&R[i]<='z')
        {
            l++;
        }
    }
    if(u==len)
    {
        for(int i=0;i<len;i++)
        {
            R[i]=R[i]+32;
        }
        puts(R);
    }
    else if(R[0]>='a'&&R[0]<='z'&&l>1)
    {
        puts(R);
    }
    else if(R[0]>='a'&&R[0]<='z')
    {
        for(int i=1;i<len;i++)
        {
            if(R[i]>='A'&&R[i]<='Z')
            {
                R[i]=R[i]+32;
            }
        }
        R[0]=R[0]-32;
        puts(R);
    }
    else if(R[0]>='A'&&R[0]<='Z')
    {
        puts(R);
    }
    
    return 0;
}
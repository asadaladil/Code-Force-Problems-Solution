#include <stdio.h>
#include <string.h>
int main() {
    long long int b;
    scanf("%lld",&b);
    char R[b+1];
    scanf("%s",R);
    int len=strlen(R);
    int a=0,d=0;
    for(int i=0;i<len;i++)
    {
        if(R[i]=='A')
        {
            a++;
        }
        else if(R[i]=='D')
        {
            d++;
        }
    }
    if(a>d)
    {
        printf("Anton");
    }
    else if(d>a)
    {
        printf("Danik");
    }
    else if(a==d)
    {
        printf("Friendship");
    }
   

    return 0;
}
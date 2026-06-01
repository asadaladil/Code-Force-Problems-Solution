#include <stdio.h>
int g;
void just_hash(int a)
{
    for(int i=1;i<=a;i++)
    {
        printf("#");
    }
    printf("\n");
}
void dot_hash(int a)
{
    for(int i=1;i<=a;i++)
    {
        if(i==a)
        {
            printf("#\n");
            break;
        }
        printf(".");
    }
}
void hash_dot(int a)
{
    for(int i=1;i<=a;i++)
    {
        if(i==1)
        {
            printf("#");
            continue;
        }
        printf(".");
    }
    printf("\n");
}
int main() 
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;i++)
    {
        if(i%4==0)
        {
            hash_dot(b);
        }
        else if(i%2==0)
        {
            dot_hash(b);
        }
        else
        {
            just_hash(b);
        }
    }
    
    return 0;
}
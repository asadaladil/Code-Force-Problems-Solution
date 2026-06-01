// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    char R[100];
    scanf("%s",R);
    int len=strlen(R),b=0;
    int A[150];
    for(int i=0;i<150;i++)
    {
        A[i]=0;
        
    }
    for(int i=0;i<=len;i++)
    {
        A[R[i]]++;
    }
    for(int i=97;i<=130;i++)
    {
        if(A[i]>0)
        {
            b++;
        }
    }
    if(b%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
   

    return 0;
}
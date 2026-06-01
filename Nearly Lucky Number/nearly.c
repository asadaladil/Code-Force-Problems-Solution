#include <stdio.h>
#include <string.h>
int main() {
    char R[10000];
    scanf("%s",R);
    int len=strlen(R),b=0;
    for(int i=0;i<len;i++)
    {
        if(R[i]=='4'||R[i]=='7')
        {
            b++;
        }
    }
    if(b==4||b==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
   

    return 0;
}
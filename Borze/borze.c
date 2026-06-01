#include <stdio.h>
#include <string.h>
void borze(char r[])
{
    int len=strlen(r),n=0;
    for(int i=0;i<len;i++)
    {
       if(r[i]=='.')
       {
           printf("0");
       }
       else if(r[i]=='-'&&r[i+1]=='.')
       {
           printf("1");
           i++;
       }
       else if(r[i]=='-'&&r[i+1]=='-')
       {
           printf("2");
           i++;
       }
        
    }
}
int main() {
    
    char R[205];
    scanf("%s",R);
    borze(R);
    
    return 0;
}
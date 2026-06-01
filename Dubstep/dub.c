#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    char R[205];
    scanf("%s",R);
    int len=strlen(R);
    for(int i=0;i<len;)
    {
        if(R[i]=='W'&&R[i+1]=='U'&&R[i+2]=='B')
        {
            i=i+3;
            continue;
        }
        else
        {
            printf("%c",R[i]);
            i++;
            if(R[i]=='W'&&R[i+1]=='U'&&R[i+2]=='B')
            {
                printf(" ");
            }
           
        }
    }

    return 0;
}
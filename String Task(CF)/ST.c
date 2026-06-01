#include <stdio.h>
#include <string.h>
int main()
{
    char w[102];
    int i;
    fgets(w,sizeof(w),stdin);
    for(i=0;i<strlen(w)-1;i++)
    {
        if(w[i]>='A'&&w[i]<='Z')
        {
            w[i]+=32;
        }
        if(!(w[i]=='a'||w[i]=='e'||w[i]=='i'||w[i]=='o'||w[i]=='u'||w[i]=='y'))
        {
            printf(".%c",w[i]);
        }
    }
    return 0;
}

#include <stdio.h>

int main() {
    int a,b=0,c=0;
    scanf("%d",&a);
    int d=a*3;
    for(int i=1;i<=a;i++)
    {
        char R[d+1];
        scanf("%s",R);
        if(R[1]=='+'&&R[2]=='+'||R[0]=='+'&&R[1]=='+')
        {
            b++;
        }
        else if(R[0]=='-'&&R[1]=='-'||R[1]=='-'&&R[2]=='-')
        {
            c++;
        }
   }
   if(b>c)
   {
       printf("%d",b-c);
   }
   else if(c>b)
   {
       printf("%d",b-c);
   }
   else if(b==c)
   {
       printf("0");
   }


    return 0;
}
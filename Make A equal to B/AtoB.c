#include <string.h>
#include <stdio.h>
int g;
int matching_test(int A[],int B[])
{
    int d=0;
    for(int j=1; j<=g; j++)
    {
        if(A[j]==B[j])
        {
            d++;
        }
    }
    return d;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int a,b=0,c=0,e=0,f=0;
        scanf("%d",&a);
        g=a;
        int A[a+1],B[a+1];
        for(int j=1; j<=a; j++)
        {
            scanf("%d",&A[j]);
            if(A[j]==0)
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        for(int j=1; j<=a; j++)
        {
            scanf("%d",&B[j]);
            if(B[j]==0)
            {
                e++;
            }
            else
            {
                f++;
            }
        }
        if(b==e&&c==f)
        {
            int d=matching_test(A,B);
            if(d==a)
            {
                printf("0\n");
            }
            else
            {
                printf("1\n");
            }
        }
        else
        {
            if(c>f)
            {
                int x=c-f;
                for(int m=1; m<=x; m++)
                {
                    for(int j=1; j<=a;j++)
                    {
                        if(A[j]==0&&B[j]==0||A[j]==1&&B[j]==1)
                        {
                            continue;
                        }
                        else
                        {
                            if(B[j]==0)
                            {
                                B[j]=1;
                                break;
                            }
                        }
                    }
                }
                int d=matching_test(A,B);
                if(d==a)
                {
                    printf("%d\n",x);
                }
                else
                {
                    printf("%d\n",x+1);
                }
            }
            else if(f>c)
            {
                int x=f-c;
                for(int m=1; m<=x; m++)
                {
                    for(int j=1; j<=a;j++)
                    {
                        if(A[j]==0&&B[j]==0||A[j]==1&&B[j]==1)
                        {
                            continue;
                        }
                        else
                        {
                            if(A[j]==0)
                            {
                                A[j]=1;
                                break;
                            }
                        }
                    }
                }
                int d=matching_test(A,B);
                if(d==a)
                {
                    printf("%d\n",x);
                }
                else
                {
                    printf("%d\n",x+1);
                }
            }
        }
    }

    return 0;
}

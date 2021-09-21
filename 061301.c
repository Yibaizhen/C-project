#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc,char* argv[])
{
    long n,i,number1=1,number2=1,t=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i==1||i==2)
        {
            printf("%d",number1);
        }
        else
        t=number2;
        number2=number1+number2;
        number1=t;
    }
    printf("%d",number2);
    return 0;
}

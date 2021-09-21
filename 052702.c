#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    int x,a,b,c;
    scanf("%d",&x);
    a=x/100;
    b=x%100/10;
    c=x%10;
    if(x==a*a*a+b*b*b+c*c*c)
    {
        printf("yes");
    }
    else printf("no");
    return 0;
}

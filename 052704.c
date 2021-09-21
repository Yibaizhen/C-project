#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c||b+c>a||a+c>b)
    {
        if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
        {
            printf("yes");
        }
        else printf("no");
    }
    else printf("no");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc,char* argv[])
{
    int x,y;
    scanf("%d",&x);
    if(x<-2)
    {
        printf("%d",y=7-2*x);
    }
    if(x>=-2&&x<3)
    {
        printf("%d",y=5-abs(3*x+2));
    }
    if(x>=3)
    {
        printf("%d",y=3*x+4);
    }
    return 0;
}

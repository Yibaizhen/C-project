#include <stdio.h>
#include <stdlib.h>
//ผฆอรอฌมý
int main(int argc,char* argv[])
{
    int m,n;
    int x,y;
    scanf("%d%d",&m,&n);
    x=(int)(4*m-n)/2;
    y=(int)(n-2*m)/2;
    printf("%d %d",x,y);
    return 0;

}

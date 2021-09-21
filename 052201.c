#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    int m,n;
    double x,y;
    scanf("%d%d",&m,&n);
    x=(int)(4m-n)/2;
    y=(int)(n-2m)/2;
    printf("%d %d",x,y);
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc,char* argv[])
{
    int year ;
    double deposit,deposit1,p;
    scanf("%d %lf",&year,&deposit);
    p=1+0.0225;
    deposit1=deposit*(pow(p,year));
    printf("%.6f",deposit1);

    return 0;
}

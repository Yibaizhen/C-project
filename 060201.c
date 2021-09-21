#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc,char* argv[])
{
    int n,m,i;
    double j;
    scanf("%d %d",&m,&n);
    for(i=m; i<=n; i++)
    {
        j=log(i);
        printf("%4d%8.4f\n",i,j);
    }
    return 0;
}

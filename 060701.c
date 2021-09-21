#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc,char* argv[])
{
    int n,a,i;
    double s=0;
    scanf("%d %d",&n,&a);
    for(i=1;i<=n;i++)
    {
        if(i=1)
        {
            a=a;
        }
        a=a+a*pow(10,i-1);
        s+=a;
    }
    printf("%.0f",s);
    return 0;
}

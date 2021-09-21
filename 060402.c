#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc,char* argv[])
{
    int n,item,i;
    double s=0,t=0;
    scanf("%d %d",&item,&n);
    for(i=1; i<=n; i++)
    {
        if(i==1)
        {
            t=item;
        }
        else
            t=sqrt(t) ;
            s=s+t;
    }
    printf("%.2f",s);
    return 0;
}

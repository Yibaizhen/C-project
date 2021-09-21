#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    int n,t;
    scanf("%d",&n);
    do
    {
        t=n%10;
        n=n/10;
        printf("%d ",t);
    }while(n%10!=0);
    return 0;
}

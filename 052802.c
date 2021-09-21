#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    int x,n,M=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x);
        if(M<x)
        {
            M=x;
        }
    }
    printf("%d",M);
    return 0;
}

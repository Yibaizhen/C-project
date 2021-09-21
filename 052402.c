#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    int a;
    scanf("%d",&a);
    if(a/10000==0)
    {
        if(a/1000==0)
        {
            if(a/100==0)
            {
                if(a/10==0)
                {
                    printf("1");
                }
                else printf("2");
            }
            else printf("3");
        }
        else printf("4");
    }
    else printf("5");
    return 0;
}
